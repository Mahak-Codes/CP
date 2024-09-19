#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int check(vector<int>&a,int i){
   
}
int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>dp(n,0);
    if(dp[0]!=0){
        dp[0]=1;
    }
    if(dp[0]==0){
        if(dp[1]==1){
            dp[0]=1;
        }
        else{
            dp[0]=2;
        }

    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            dp[i]=dp[i-1]+check(a,i);
        }
    }


    

    return 0;
}