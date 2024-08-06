#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int solve(int n, vector<int> &a, vector<int> &dp) {
    if (n < 1) {
        return 0;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    dp[n] = max(solve(n - 2, a, dp) + a[n] * n, solve(n - 1, a, dp));
    return dp[n];
}

int32_t main() {
    mahak_codes 
    int n;
    cin >> n;
    vector<int> b(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin>>b[i];
    }
    int r=*max_element(b.begin(),b.end());
    vector<int>a(r+1,0);
    for (int i = 1; i <= n; i++) {
        a[b[i]]++;
    }
    vector<int> dp(r+1, -1);
    cout<<solve(r , a, dp)<< endl;
    return 0;
}
