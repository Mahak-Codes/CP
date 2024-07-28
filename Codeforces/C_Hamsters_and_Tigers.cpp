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
    string s, s1;
    cin >> s1;
    s = s1 + s1;
    int hcnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == 'H')
        {
            hcnt++;
        }
    }
    int cnt = 0, maxi = 0;
    for (int i = 0; i < n ; i++)
    {
        cnt=0;
        for (int j = i; j < i+hcnt; j++)
        {
            if (s[j] == 'H')
            {
                cnt++;
                maxi = max(cnt, maxi);
            }
        }
    }
    cout<<hcnt-maxi<<endl;

    return 0;
}