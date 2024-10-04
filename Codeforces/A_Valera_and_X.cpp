#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int n;
    cin >> n;
    char s[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }
    char d = s[0][0];
    char c = s[0][1];
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == n - i - 1)
            {
                if (s[i][j] != d)
                {
                    cout << "NO";
                    f = 0;
                    break;
                }
            }
            else
            {
                if (s[i][j] != c)
                {
                    cout << "NO";
                    f = 0;
                    break;
                }
            }
        }
        if (!f)
        {
            break;
        }
    }
    if (f)
    {
        if (c != d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}