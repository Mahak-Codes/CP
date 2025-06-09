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
        vector<int> a(n);
        map<int, int> mp;
        int di = 0;
        vector<int> dcnt(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (mp[a[i]] == 0)
            {
                di++;
            }
            dcnt[i] = di;
            mp[a[i]]++;
        }
        int ed = n - 1, r = n - 1;
        map<int, int> mp2;
        int cnt = 0, ans = 0;
        while (r >= 0 && ed >= 0)
        {

            if (mp2[a[r]] == 0)
            {
                cnt++;
                mp2[a[r]]++;
                if (cnt == dcnt[ed])
                {
                    ans++;
                    cnt = 0;
                    ed = r - 1;
                    mp2.clear();
                }
            }
            else if (cnt == dcnt[ed])
            {
                mp2[a[r]]++;
                ans++;
                cnt = 0;
                ed = r - 1;
                mp2.clear();
            }

            r--;
        }
        cout << ans << endl;
    }

    return 0;
}