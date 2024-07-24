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
        int x, y, z, cnt = 1;
        cin >> x >> y >> z;
        int earn = x * y;
        if (earn <= z)
        {
            cout << 0 << endl;
        }
        else
        {
            while (earn>0)
            {
                earn -= y;
                if (earn <= z)
                {
                    cout << cnt << endl;
                    break;
                }
                cnt++;
            }
        }
    }

    return 0;
}