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
        priority_queue<int, vector<int>, greater<int>> ev;
        int ocnt = 0, ecnt = 0, maxodd = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                ecnt++;
                ev.push(x);
            }
            else
            {
                if (maxodd < x)
                {
                    maxodd = x;
                }
                ocnt++;
            }
        }
        if (ocnt == 0 || ecnt == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int ele = maxodd;
            int ans = ev.size();
            while (!ev.empty())
            {
                int f = ev.top();
                ev.pop();
                if (f < ele)
                {
                    ele += f;
                }
                else
                {
                    ele += (2 * f);
                    ans++;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}