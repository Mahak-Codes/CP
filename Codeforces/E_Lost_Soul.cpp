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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<bool> mp(n + 1);
        if (a.back() == b.back())
        {
            cout << n << endl;
            continue;
        }

        int ans = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] == b[i] || a[i] == a[i + 1] || b[i] == b[i + 1] || mp[a[i]] || mp[b[i]])
            {
                ans = i;
                break;
            }

            mp[a[i + 1]] = mp[b[i + 1]] = true;
        }

        cout << ans + 1 << endl;
    }

    return 0;
}