#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
class SegMin{
    vector<int>seg;
    int n;
    public:
    SegMin(int size){
        n=size;
        seg.resize(4*n);
    }
    void build(int ind,int l,int r,vector<int>&a){
        if(l==r){
            seg[ind]=a[l];
            return;
        }
        int mid=(r-l)/2+l;
        build(2*ind+1,l,mid,a);
        build(2*ind+2,mid+1,r,a);
        seg[ind]=(seg[2*ind+1]^seg[2*ind+2]);
    }
    int query(int ind,int ql,int qr,int l,int r){
        // ql qr l r ql qr =>no overlap
        if(qr<l or r<ql){
            return 0;
        }
        // ql l r qr =>complete overlap
        else if(ql<=l && r<=qr){
            return seg[ind];
        }
        else{
            int mid=(r-l)/2+l;
            int left=query(2*ind+1,ql,qr,l,mid);
            int right=query(2*ind+2,ql,qr,mid+1,r);
            return (left^right);
        }
    }
};
int32_t main() {
    mahak_codes
   int n,q;
   cin>>n>>q;
   vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   SegMin sg(n);
   sg.build(0,0,n-1,a);
   while(q--){
    int ql,qr;
    cin>>ql>>qr;
    ql--,qr--;
    cout<<sg.query(0,ql,qr,0,n-1)<<endl;
   }

    return 0;
}