#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes  ios_base::sync_with_stdio(false); cin.tie(nullptr);

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
        vector<int> p(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            p[i + 1] = s[i] - '0';
            p[i + 1] += p[i];
        }
        map<int, int> mp;
        int res = 0;
        mp.insert({p[0] - 0, 1});
        for (int r = 1; r <= n; ++r)
        {
            res += mp[p[r] - r];
            if (mp.count(p[r] - r) == 0)
            {
                mp.insert({p[r] - r, 0});
            }
            mp[p[r] - r]++;
        }
        cout << res << endl;
    }

    return 0;
}