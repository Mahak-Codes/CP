#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int xy(vector<int>& a, vector<int>& pre) {
    vector<pair<int, int>> v;
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        v.push_back({a[i], pre[i]});
    }
    sort(v.begin(), v.end());
    int sum = accumulate(pre.begin(), pre.end(), 0);
    int sm = 0;
    for (int i = 0; i < n; ++i) {
        sm += v[i].second; 
        if (sm >= sum / 2) {
            return v[i].first; 
        }
    }
    return v[n - 1].first;
}

int solve(vector<int>& x, vector<int>& y, vector<int>& pre) {
    int cx = xy(x, pre);
    int cy = xy(y, pre);
    int ans = 0;
    for (int i = 0; i < x.size(); ++i) {
        int distance = abs(x[i] - cx) + abs(y[i] - cy);
        ans += pre[i] * distance;
    }
    return ans;
}

int32_t main() {
    mahak_codes
    vector<int> x = {1, 3, 2, 4};
    vector<int> y = {1, 2, 3, 4};
    vector<int> pre = {1000, 13, 0, 4};
    int result = solve(x, y, pre);
    cout << "Minimum cost: " << result << endl;
    return 0;
}
