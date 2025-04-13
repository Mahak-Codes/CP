#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

struct Node{
    int open;
    int close;
    int full;
    Node(int c = 0, int o = 0, int f = 0) {
        open=o;
        close=c;
        full=f;
    }
};
class SgTree{
    int n;
    public:
    string a;
    vector<Node>seg;
    SgTree(const string& s) {
        n = s.size();
        a = s;
        seg.resize(4 * n);
    }
    Node merge(Node lf,Node rg){
        Node ans= Node(0,0,0);
        ans.full=lf.full+rg.full+min(lf.open,rg.close);
        ans.close=lf.close+rg.close-min(lf.open,rg.close);
        ans.open=lf.open+rg.open-min(lf.open,rg.close);
        return ans;
    }
    void build(int ind,int l,int h){
       
        if (l == h) {
            if (a[l] == '(')
                seg[ind] = Node(0, 1, 0);
            else
                seg[ind] = Node(1, 0, 0);
            return;
        }
        int mid=(h-l)/2+l;
        
        build(2*ind+1,l,mid);
        build(2*ind+2,mid+1,h);
        seg[ind]=merge(seg[2*ind+1],seg[2*ind+2]);
    }
    Node query(int ind,int ql,int qr,int low,int high){
        if(qr<low ||high<ql){
            return Node(0,0,0);
        }
        else if(ql<=low && high<=qr){
            return seg[ind];
        }
        else{
            int mid=(high-low)/2+low;
            Node lft=query(2*ind+1,ql,qr,low,mid);
            Node rgh=query(2*ind+2,ql,qr,mid+1,high);
            return merge(lft,rgh);
        }
    }
};
int32_t main() {
    mahak_codes
    string s;
    cin>>s;
    int n=s.size();
    int m;
    cin>>m;
    SgTree sg(s);
    sg.build(0,0,n-1);
    while(m--){
        int l,r;
        cin>>l>>r;
        --l;
        --r;
        int ans = sg.query(0, l, r, 0, n - 1).full;
        cout<<2*ans<<endl;
    }
    return 0;
}