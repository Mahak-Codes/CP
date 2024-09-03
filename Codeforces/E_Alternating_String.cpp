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
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            vector<vector<int>> ep(n, vector<int>(26, 0)), op(n, vector<int>(26, 0));
            vector<vector<int>> es(n, vector<int>(26, 0)), os(n, vector<int>(26, 0));
            for (int i = 0; i < n; ++i)
            {
                if (i > 0)
                {
                    for (int j = 0; j < 26; ++j)
                    {
                        ep[i][j] = ep[i - 1][j];
                        op[i][j] = op[i - 1][j];
                    }
                }
                if (i % 2 == 0)
                {
                    ep[i][s[i] - 'a']++;
                }
                else
                {
                    op[i][s[i] - 'a']++;
                }
            }
            for (int i = n - 1; i >= 0; --i)
            {
                if (i < n - 1)
                {
                    for (int j = 0; j < 26; ++j)
                    {
                        es[i][j] = es[i + 1][j];
                        os[i][j] = os[i + 1][j];
                    }
                }
                if (i % 2 == 1)
                {
                    es[i][s[i] - 'a']++;
                }
                else
                {
                    os[i][s[i] - 'a']++;
                }
            }
            int ecnt = 0, ocnt = 0;
            for (int i = 0; i < 26; ++i)
            {
                ecnt = max(ecnt, ep[n - 1][i]);
                ocnt = max(ocnt, op[n - 1][i]);
            }
            int ans = n - ecnt - ocnt;
            if (n % 2 == 0)
            {
                cout << ans << endl;
            }
            else
            {
                for (int i = 0; i < n; ++i)
                {
                    vector<int> ecm(26, 0), ocm(26, 0);
                    if (i > 0)
                    {
                        for (int j = 0; j < 26; ++j)
                        {
                            ecm[j] = ep[i - 1][j];
                            ocm[j] = op[i - 1][j];
                        }
                    }
                    if (i < n - 1)
                    {
                        for (int j = 0; j < 26; ++j)
                        {
                            ecm[j] += es[i + 1][j];
                            ocm[j] += os[i + 1][j];
                        }
                    }
                    ecnt = *max_element(ecm.begin(), ecm.end());
                    ocnt = *max_element(ocm.begin(), ocm.end());
             
                    int cn = n -1 -ecnt - ocnt;
                    ans = min(ans, cn);
                }
                cout << ans+1<< endl;
            }
        }
    }
    return 0;
}