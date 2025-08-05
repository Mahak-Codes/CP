#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            ans += a;
        }
        else if (s[i] == '2')
        {
            ans += b;
        }
        else if (s[i] == '3')
        {
            ans += c;
        }
        else if (s[i] == '4')
        {
            ans += d;
        }
    }
    cout<<ans<<endl;
    return 0;
}