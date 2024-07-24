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
        int n, x;
        cin >> n >> x;
        int sum = 0, cnt = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                cnt++;
                sum += (a[i] - x);
            }
            else
            {
                sum -= (x - a[i]);
                if (sum >= 0)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}