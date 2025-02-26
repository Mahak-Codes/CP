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
        int a, b;
        cin >> a >> b;
        int kx, ky, qx, qy;
        cin >> kx >> ky >> qx >> qy;
        set<pair<int, int>> s1, s2;
        map<pair<int,int>,int>mp;
        vector<pair<int, int>> pos = {{a, b}, {-a, b}, {a, -b}, {-a, -b}, {b, a}, {-b, a}, {b, -a}, {-b, -a}};
        for (auto p : pos)
        {

            s1.insert({kx + p.first, ky + p.second});
            s2.insert({qx + p.first, qy + p.second});

        }

        int ans = 0;
        for (auto p : s1)
        {
            if (s2.count(p))
            {
                ans++;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}