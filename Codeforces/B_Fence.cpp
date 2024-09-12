#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>psum(n);
    psum[0]=a[0];
    for(int i=1;i<n;i++){
        psum[i]=psum[i-1]+a[i];
    }
    int ans=psum[k-1],ans2=0;
    for(int i=k;i<n;i++){
        int x=psum[i]-psum[i-k];
        ans=min(ans,x);
        if(ans==x){
            ans2=i-k+1;
        }
    }
    cout<<ans2+1<<endl;
    

    return 0;
}