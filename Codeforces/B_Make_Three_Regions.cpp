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
        int ans = 0;
        char a[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 1; j < n-1; j++)
            {
                if (i == 0 && a[i][j] == '.' && a[i][j+1] == '.' && a[i][j-1] == '.'&& a[1][j- 1] == 'x' && a[1][j + 1] == 'x' && a[1][j] == '.')
                {
                    ans++;
                }
                else if (i == 1 && a[i][j] == '.' && a[i][j+1] == '.' && a[i][j-1] == '.' && a[0][j - 1] == 'x' && a[0][j + 1] == 'x' && a[0][j] == '.')
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}