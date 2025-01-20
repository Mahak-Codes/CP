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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<int> r(n, 0), c(m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                r[i] += v[i][j];
                c[j] += v[i][j];
            }
        }
        int i = 0, j = 0;
        for (int in = 0; in < s.size(); in++)
        {
            if (s[in] == 'D')
            {
                v[i][j] = -r[i];
                r[i] += v[i][j];
                c[j] += v[i][j];
                i++;
            }
            else
            {
                v[i][j] = -c[j];
                r[i] += v[i][j];
                c[j] += v[i][j];
                j++;
            }
        }
        v[n - 1][m - 1] = -r[n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
