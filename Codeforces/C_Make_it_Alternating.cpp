// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define endl "\n"
// #define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
// int f(int i,string s,int prev, vector<vector<int>>&dp){
//     if(i==s.size()){
//         return 0;
//     }
//     if(dp[i][prev]!=-1){
//         return dp[i][prev];
//     }
//     int curr=s[i]-'0';
//     if(prev==curr){
//         return dp[i][prev]=1+f(i+1,s,prev,dp);
//     }
//     return dp[i][prev]=min(1+f(i+1,s,prev,dp),f(i+1,s,curr,dp));
// }
// int32_t main() {
//     mahak_codes
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         vector<vector<int>>dp(n+1,vector<int>(2,-1));
//         int prev=0;
//         int ch1=f(0,s,prev,dp);
//         // vector<vector<int>>dp2(n+1,vector<int>(2,-1));/
//         prev=1;
//         int ch2=f(0,s,prev,dp);
//         cout<<min(ch1,ch2)<<endl;
//     }

    

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int mod=998244353;
int fact(int n,vector<int>&dp){
    if(n==0||n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=(n*fact(n-1,dp))%mod;
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;

    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        char prev=s[0];
        int cnt=1;
        int d=1,way=1;
        for(int i=1;i<n;i++){
            if(s[i]==prev){
                cnt++;
            }
            else{
                way=(way*cnt) % mod;
                cnt=1;
                d++;
                prev=s[i];
            }
        }
        way=(way*cnt) % mod;
        vector<int>dp(n-d+1,-1);
        int ans=(fact(n-d,dp)*way)%mod;
        cout<<n-d<<" "<<ans<<endl;

    }
    return 0;
}