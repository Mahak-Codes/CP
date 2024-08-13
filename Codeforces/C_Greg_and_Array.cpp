#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), l(m), r(m), d(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
    vector<int> op(m + 1, 0);
    vector<int> diff(n + 1, 0);
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        op[x]++;
        op[y + 1]--;
    }
    for (int i = 1; i <= m; i++)
    {
        op[i] += op[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        int lt = l[i] - 1;
        int rt = r[i] - 1;
        int dt = d[i]*op[i];
        diff[lt] += dt;
        diff[rt + 1] -= dt;
    }
    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] += diff[i];
        cout << a[i] << " ";
    }
    return 0;
}