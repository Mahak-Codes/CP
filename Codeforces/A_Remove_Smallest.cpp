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
        int f = 0;
        int a[n];
        for (int &i : a)
        {
            cin >> i;
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1)
            {
                f = 1;
                cout << "NO" << endl;
                ;
                break;
            }
        }
        if (!f)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}