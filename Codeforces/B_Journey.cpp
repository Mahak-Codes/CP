#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        vector<int> v = {a, b, c};
        int cy = a + b + c;
        int cnt = n / cy;
        int rem = n % cy;
        int ans = cnt * 3;
        for (int i = 0; i < 3 && rem > 0; ++i)
        {
            rem -= v[i];
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
