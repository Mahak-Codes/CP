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
        vector<int>ans;
        vector<vector<char>> a(n, vector<char>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (j % k == 0 && i % k == 0)
                {
                    ans .push_back(a[i][j]-'0');
                }
            }
        }
        for (int i = 0; i < k * k; i++)
        {
            if (i % k == 0)
            {
                cout << endl;
            }
            cout << ans[i];
        }
    }

    return 0;
}