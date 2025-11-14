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
    multiset<int> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto it = s.upper_bound(x);
        if (it==s.end())
        {
            s.insert(x);
            ans++;
        }
        else
        {
            s.erase(it);
            s.insert(x);
        }
    }
    cout << s.size() << endl;
    return 0;
}