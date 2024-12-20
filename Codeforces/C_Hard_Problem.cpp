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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int r1 = min(a, m);
        int r2 = min(b, m);
        int ans=r1+r2;
        int x = m - r1;
        int y = m - r2;
        int f1 = min(c, x);
        int f2 = min(c - f1, y);
        cout << ans+ f1 + f2 << endl;
    }
    return 0;
}