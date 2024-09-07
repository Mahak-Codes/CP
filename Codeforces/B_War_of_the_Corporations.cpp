#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes
    string s,t;
    cin >> s;
    cin >> t;
    size_t pos = s.find(t);
    int cnt = 0;
    while (pos != string::npos)
    {
        cnt++;
        pos = s.find(t, pos + t.length());
    }
    cout << cnt << endl;
    return 0;
}