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
        vector<int> cnt(26, 0);
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt[s[i] - 'A'] == 0)
            {
                c++;
            }
            cnt[s[i] - 'A']++;
        }
        cout << n + c << endl;
    }

    return 0;
}