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
        string a,
        b, c;
    cin >> a >> b >> c;
    a += b;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    if (a == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;

}