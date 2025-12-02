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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    map<int, int> mp;
    int i = 0, j = 0;
    while (j < n)
    {
        mp[a[j]]++;
        if (mp[a[j]] == 1)
        {
            ans += (j - i + 1);
        }
        else
        {
            while (mp[a[j]] > 1)
            {
                mp[a[i]]--;
                i++;
            }
            if (mp[a[j]] == 1)
            {
                ans += (j - i + 1);
            }
        }
        j++;
    }
    cout << ans << endl;

    return 0;
}