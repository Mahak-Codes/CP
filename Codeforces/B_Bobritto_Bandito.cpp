#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes  ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main()
{
    mahak_codes int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        n -= m;
        int x = min(-l, n);
        l += x;
        n -= x;
        r -= n;
        cout << l << ' ' << r << endl;
    }

    return 0;
}