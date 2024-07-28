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
        int n, k;
        cin >> n >> k;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char x;
                cin >> x;
                if (j % k == 0 && i % k == 0)
                {
                    ans += x;
                }
            }
        }

        int cnt = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            if (cnt == n / k)
            {
                cout << endl;
                cnt = 0;
            }
            cout << ans[i];
            cnt++;
        }
        cout << endl;
    }

    return 0;
}
