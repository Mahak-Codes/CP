#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
class SgTree{
    int n;
    public:
    vector<int>a;
    vector<int>seg;
    SgTree(int size){
        n=size;
        a.resize(size);
        seg.resize(4*n);
    }
    void build(int ind,int l,int h,int orr){
        if(l==h){
            seg[ind]=a[l];
            return;
        }
        int mid=(h-l)/2+l;
        build(2*ind+1,l,mid,!orr);
        build(2*ind+2,mid+1,h,!orr);
        if(orr){
            seg[ind]=seg[2*ind+1]|seg[2*ind+2];
        }
        else{
            seg[ind]=seg[2*ind+1]^seg[2*ind+2];
        }
    }
    void update(int ind,int l,int h,int i,int val,int orr){
        if(l==h){
            seg[ind]=val;
            a[i]=val;
            return;
        }
        int mid=(h-l)/2+l;
        if(i<=mid){
            update(2*ind+1,l,mid,i,val,!orr);
        }
        else{
            update(2*ind+2,mid+1,h,i,val,!orr);
        }
        if(orr){
            seg[ind]=seg[2*ind+1]|seg[2*ind+2];
        }
        else{
            seg[ind]=seg[2*ind+1]^seg[2*ind+2];
        }
    }
};
int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    int size = 1LL << n;
    SgTree sg(size);
    for(int i=0;i<size;i++){
        cin >> sg.a[i];
    }
    if(n&1){
        sg.build(0,0,size-1,1);
    }
    else{
        sg.build(0,0,size-1,0);
    }
    while(m--){
        int ind,val;
        cin>>ind>>val;
        --ind;
        if(n&1){
            sg.update(0,0,size-1,ind,val,1);
        }
        else{
            sg.update(0,0,size-1,ind,val,0);
        }
        cout<<sg.seg[0]<<endl;
    }
    return 0;
}