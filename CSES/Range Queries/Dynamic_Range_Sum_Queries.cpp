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
        seg[ind]=(seg[2*ind+1]+seg[2*ind+2]);
    }
    int query(int ind,int ql,int qr,int l,int r){
        // ql qr l r ql qr
        if(qr<l or r<ql){
            return 0;
        }
        // ql l r qr
        else if(ql<=l && r<=qr){
            return seg[ind];
        }
        else{
            int mid=(r-l)/2+l;
            int left=query(2*ind+1,ql,qr,l,mid);
            int right=query(2*ind+2,ql,qr,mid+1,r);
            return (left+right);
        }
    }
    void update(int ind,int l,int r,int k,int val,vector<int>&a){
        if(l==r){
            seg[ind]=val;
            a[k]=val;
            return;
        }
        int mid=(r-l)/2+l;
        if(k<=mid){
            update(2*ind+1,l,mid,k,val,a);
        }
        else{
            update(2*ind+2,mid+1,r,k,val,a);
        }
        seg[ind]=seg[2*ind+1]+seg[2*ind+2];
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
    int type;
    cin>>type;
    if(type==1){
        int k,u;
        cin>>k>>u;
        k--;
        sg.update(0,0,n-1,k,u,a);
    }
    else{
        int ql,qr;
        cin>>ql>>qr;
        ql--,qr--;
        cout<<sg.query(0,ql,qr,0,n-1)<<endl;
    }
   
    
   }

    return 0;
}