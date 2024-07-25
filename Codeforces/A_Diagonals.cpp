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
        int n, k;
        cin >> n >> k;
        if (k == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 1;
            k -= n;
            if (k <= 0)
            {
                cout << 1 << endl;
            }
            else
            {
                for (int i = n - 1; i >= 1; i--)
                {
                    cnt++;
                    k -= i;
                    if (k <= 0)
                    {
                        break;
                    }
                    cnt++;
                    k -= i;
                    if (k <= 0)
                    {
                        break;
                    }
                }
                cout << cnt << endl;
            }
        }
    }

    return 0;
}