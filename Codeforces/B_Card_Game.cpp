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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int cnt1 = 0, cnt2 = 0, ans = 0;
        if (a > c)
        {
            cnt1++;
        }
        if (a < c)
        {
            cnt2++;
        }
        if (b > d)
        {
            cnt1++;
        }
        if (b < d)
        {
            cnt2++;
        }
        if (cnt1 > cnt2)
        {
            ans++;
        }

        cnt1 = 0, cnt2 = 0;

        if (a > d)
        {
            cnt1++;
        }
        if (a < d)
        {
            cnt2++;
        }
        if (b > c)
        {
            cnt1++;
        }
        if (b < c)
        {
            cnt2++;
        }
        if (cnt1 > cnt2)
        {
            ans++;
        }

        cnt1 = 0, cnt2 = 0;

        if (b > d)
        {
            cnt1++;
        }
        if (b < d)
        {
            cnt2++;
        }
        if (a > c)
        {
            cnt1++;
        }
        if (a < c)
        {
            cnt2++;
        }
        if (cnt1 > cnt2)
        {
            ans++;
        }
        cnt1 = 0, cnt2 = 0;

        if (b > c)
        {
            cnt1++;
        }
        if (b < c)
        {
            cnt2++;
        }
        if (a > d)
        {
            cnt1++;
        }
        if (a < d)
        {
            cnt2++;
        }
        if (cnt1 > cnt2)
        {
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
