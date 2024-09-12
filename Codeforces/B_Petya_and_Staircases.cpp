#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int n, m;
    cin >> n >> m;
    vector<int> d(m);
    if (m == 0)
    {
        cout << "YES" << endl;
    }
    else
    {

        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
        }
        sort(d.begin(), d.end());

        int cnt = 1, f = 0;
        for (int i = 1; i < m; i++)
        {
            if (d[i] == d[i - 1] + 1)
            {
                cnt++;
                if (cnt >= 3)
                {
                    f = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {
                cnt = 1;
            }
        }
        if (!f)
        {
            if (cnt >= 3 || d[0] == 1 || d[m - 1] == n)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}