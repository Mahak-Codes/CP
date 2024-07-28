#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes  
    int t;
    cin >> t;
    while (t--)
    {
        int n, q,l,r,cnt=0;
        cin >> n >> q;
        string a, b;
        vector<vector<int>> p1(n + 1, vector<int>(26, 0));
        vector<vector<int>> p2(n + 1, vector<int>(26, 0));
        cin >> a >> b;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 26; ++j)
            {
                p1[i + 1][j] = p1[i][j];
                p2[i + 1][j] = p2[i][j];
            }
            p1[i + 1][a[i] - 'a']++;
            p2[i + 1][b[i] - 'a']++;
        }
        while (q--)
        {
            cnt=0;
            cin >> l >> r;
            l--;
            vector<int> mp1(26, 0), mp2(26, 0);
            for (int i = 0; i < 26; ++i)
            {
                mp1[i] = p1[r][i] - p1[l][i];
                mp2[i] = p2[r][i] - p2[l][i];
            }
            for (int i = 0; i < 26; i++)
            {
                cnt += abs(mp1[i] - mp2[i]);
            }
            int ans=cnt/2;
            cout << ans<< endl;
        }
    }

    return 0; 
}
