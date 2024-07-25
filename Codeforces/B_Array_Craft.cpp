#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>ans(n);
        int f=-1;
        for(int i=y-1;i<x;i++){
           ans[i]=1;
        }
        for(int i=y-2;i>=0;i--){
            ans[i]=f;
            f==-1?f=1:f=-1; 
        }
        f=-1;
        for(int i=x;i<n;i++){
            ans[i]=f;
            f==-1?f=1:f=-1; 
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}