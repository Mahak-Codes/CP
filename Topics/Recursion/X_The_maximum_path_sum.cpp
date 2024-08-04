#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int maxsum(vector<vector<int>>& a, int n, int m, int i, int j, int sum) {
    if (i == n - 1 && j == m - 1) {
        return sum + a[i][j];
    }
    sum += a[i][j];
    int ch1=INT_MIN ,ch2=INT_MIN ;
    if (i < n - 1) {
        ch1 = maxsum(a, n, m, i + 1, j, sum);
    }
    if (j < m - 1) {
        ch2 = maxsum(a, n, m, i, j + 1, sum);
    }
    return max(ch1, ch2);
}

int32_t main() {
    mahak_codes
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << maxsum(a, n, m, 0, 0, 0); 
    return 0;
}
