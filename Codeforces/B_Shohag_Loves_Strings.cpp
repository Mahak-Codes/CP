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
        string s;
        cin >> s;
        int f = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << s.substr(i, 2) << endl;
                f = 1;
                break;
            }
        }
        if (!f)
        {
            for (int i = 0; i < n - 2; i++)
            {
                if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2])
                {
                    cout << s.substr(i, 3) << endl;
                    f = 1;
                    break;
                }
            }
        }
        if (!f)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}