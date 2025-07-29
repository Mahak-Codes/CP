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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxi = *max_element(a.begin(), a.end());

        for (int i = 0; i < n; i++)
        {
            if ((maxi - a[i]) % (2 * k) >= k)
            {
                maxi += 2 * k - (maxi - a[i]) % (2 * k);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if ((maxi - a[i]) % (2 * k) >= k)
            {
                maxi = -1;
                break;
            }
        }
        cout << maxi << endl;
    }

    return 0;
}