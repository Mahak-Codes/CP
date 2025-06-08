#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    int maxi=1e6+7;
    vector<bool>dp(maxi,0);
    for (int k = 2; k <= maxi ; k++) {
            int val = 1+k+k*k ; 
            int in_k = k*k  ;    
            while (val <= maxi) {                  
                dp[val]=1;
                in_k *= k;  
                val += in_k; 
            }
    }
    while(t--) {
        int sum;
        cin >> sum;
        string ans = "NO";   
        if(dp[sum]){
            ans = "YES";
        }
        cout << ans << endl;
    }

    return 0;
}
