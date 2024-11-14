#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mini = 1e4 + 1, maxi = -1;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mini = min(a[i], mini);
            maxi = max(a[i], maxi);
        }
        int ans = 0;
        ans += (n - 1) * (maxi - mini);
        cout << ans << endl;
    }

    return 0;
}