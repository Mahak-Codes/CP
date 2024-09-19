#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int solve(int i,int f=1 ){
   


}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mini=0;
        vector<vector<int>>dp(n,vector<int>(2,0));
        int f=0;
        for(int i=0;i<n;i++){
            if(!f){
                if(a[i]==1){
                    dp[i]=dp[i-1]+1;
                }
            }
           
        }

    }

    

    return 0;
}