#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int a, b;
    cin >> a >> b;
    cout << min(a, b) << " ";
    int m = abs(a - b);
    cout << m / 2;

    return 0;
}