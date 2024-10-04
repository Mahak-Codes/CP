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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int maxi = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            int x;
            if (n & 1)
            {
                if (i & 1)
                {
                    x = (n / 2) + 1;
                }
                else
                    x = n / 2;
            }
            else
            {
                x = n / 2;
            }
            maxi = max((a[i] + x), maxi);
        }
        cout << maxi << endl;
    }

  return 0;
}