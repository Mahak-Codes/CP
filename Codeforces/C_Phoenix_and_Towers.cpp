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
        int n, m, x, ele;
        cin >> n >> m >> x;
        vector<int> a(n);
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> maxh;

        for (int i = 0; i < m; i++)
        {
            maxh.push({a[i], i + 1});
            ans[i] = i + 1;
        }
        for (int i = m; i < n; i++)
        {
            int x = maxh.top().first + a[i];
            int y = maxh.top().second;
            maxh.pop();
            maxh.push({x, y});
            ans[i] = y;
        }
        int d = maxh.top().first;
        while (!maxh.empty())
        {
            ele = maxh.top().first;
            maxh.pop();
        }
        d -= ele;
        if (d <= x)
        {
            cout<<"YES"<<endl;
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
    }
    return 0;
}