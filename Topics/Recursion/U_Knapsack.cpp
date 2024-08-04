#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int knapsack(vector<int>& wt, vector<int>& v, int w, int i, vector<vector<int>>& dp) {
    if (i < 0 || w == 0) {
        return 0;
    }
    if (dp[i][w] != -1) {
        return dp[i][w];
    }
    if (wt[i] <= w) {
        dp[i][w] = max(knapsack(wt, v, w, i - 1, dp), v[i] + knapsack(wt, v, w - wt[i], i - 1, dp));
        return dp[i][w];
    } else {
        return dp[i][w] = knapsack(wt, v, w, i - 1, dp);
    }
}

int32_t main() {
    mahak_codes
    int n, w;
    cin >> n >> w;
    vector<int> wt(n), v(n);
    vector<vector<int>> dp(n, vector<int>(w + 1, -1));
    for (int i = 0; i < n; i++) {
        cin >> wt[i] >> v[i];
    }
    cout << knapsack(wt, v, w, n - 1, dp) << endl;
    return 0;
}
