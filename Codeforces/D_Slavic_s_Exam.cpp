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
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        int cnt = 0;
        if (m > n)
        {
            cout << "NO" << endl;
        }
        else
        {
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                if (c == m)
                {
                    cnt = 1;
                    break;
                }
                if (s[i] == t[c])
                {
                    c++;
                }
                else if (s[i] == '?')
                {
                    s[i] = t[c];
                    c++;
                }
            }
            if (c == m)
            {
                cnt = 1;
                for (char &i : s)
                {
                    if (i == '?')
                    {
                        i = 'a';
                    }
                }
            }

            if (cnt)
            {
                cout << "YES" << endl;
                cout << s << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
