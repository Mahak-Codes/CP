#include <bits/stdc++.h>
using namespace std;
#define inf 0x3f3f
#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
 


struct Node {
    int total, pre, suff, sub;
    Node() {
        int val = 0;
        total = val;
        pre = val;
        suff = val;
        sub = val;
    }
};

class SgTree {
public:
    int n;
    vector<int> a;
    vector<Node> seg;

    SgTree(int size) {
        n = size;
        a.resize(n);
        seg.resize(4 * n);
    }

    Node merge(Node l, Node r) {
        Node res;
        res.total = l.total + r.total;
        res.pre = max(l.pre, l.total + r.pre);
        res.suff = max(r.suff, r.total + l.suff);
        res.sub = max({l.sub, r.sub, l.suff + r.pre});
        return res;
    }

    void build(int ind, int low, int high) {
        if (low == high) {
            int val=a[low];
            seg[ind].total = val;
            seg[ind].pre = val;
            seg[ind].suff = val;
            seg[ind].sub = val;
            return;
        }
        int mid = (low + high) / 2;
        build(2 * ind + 1, low, mid);
        build(2 * ind + 2, mid + 1, high);
        seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
    void update(int ind,int i,int val, int low, int high) {
        if (low == high) {
            a[i]=val;
            seg[ind].total = val;
            seg[ind].pre = val;
            seg[ind].suff = val;
            seg[ind].sub = val;
            return;
        }
        int mid = (low + high) / 2;
        if(i<=mid){
           update(2 * ind + 1,i,val, low, mid);
        }
        else{
           update(2 * ind + 2,i,val, mid + 1, high);
        }
       
        seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
    }

    Node query(int ind, int low, int high, int ql, int qr) {
        if (qr < low || high < ql) {
            Node nullnode;
            return nullnode;
        }
        if (ql <= low && high <= qr) {
            return seg[ind];
        }
        int mid = (low + high) / 2;
        Node left = query(2 * ind + 1, low, mid, ql, qr);
        Node right = query(2 * ind + 2, mid + 1, high, ql, qr);
        return merge(left, right);
    }

    int maxprefix(int l, int r) {
        return query(0, 0, n - 1, l, r).pre;
    }
};

int32_t main() {
    mahak_codes
    int n, q;
    cin >> n >> q;
    int size = n; 
    SgTree sg(size);
    for (int i = 0; i < size; i++) {
        cin >> sg.a[i];
    }

    sg.build(0, 0, size - 1); 
    
    while (q--) {
        int ch;
        cin>>ch;
        if(ch==1){
           int ind, val;
           cin >> ind >> val;
           ind--;  
           sg.update(0,ind,val,0,size-1);
        }
        else{
            int a,b;
            cin>>a>>b;
            a--;
            b--;
            cout<<max(sg.maxprefix(a,b),0LL)<<endl;;
        }    
    }
    return 0;
}
