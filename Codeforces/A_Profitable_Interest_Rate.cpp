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
        int a, b;
        cin >> a >> b;

        if (a >= b)
        {
            cout << a << endl;
        }
        else if (2 * a < b)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 * a - b << endl;
        }
    }

    return 0;
}