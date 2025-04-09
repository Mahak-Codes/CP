#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,x;
    cin>>n>>x;
    vector<int>h(n),s(n);
    vector<int>dp(x+1,0);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        for(int j=x;j>=0;j--){
            if(h[i]<=j){
                dp[j]=max(dp[j-h[i]]+s[i],dp[j]);
            }
        }
    }
    cout<<dp[x]<<endl;
    return 0;
}