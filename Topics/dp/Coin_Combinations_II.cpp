#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int> 
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,x;
    cin>>n>>x;
    int m=1000000007;
    vi c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vector<int>dp(x+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=x;j++){
            if(j>=c[i]){
                dp[j]=(dp[j]+dp[j-c[i]])%m;

            }
        }
    }
    cout<<dp[x]<<endl;
    return 0;
}