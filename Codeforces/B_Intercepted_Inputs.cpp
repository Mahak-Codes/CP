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
     int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int d = k - 2;
        map<int, int> mp;
        vector<int>a(k);
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            a[i]=x;
        }
        int f = 0;
        for (int i = 0; i < k; i++)
        {
            if (d % a[i]== 0 && mp.find(d / a[i]) != mp.end())
            {
                if (a[i] == d / a[i])
                {
                    if (mp[a[i]] >= 2)
                    {
                        f = 1;
                        cout << a[i] << " " << a[i] << endl;
                        break;
                    }
                }
                else
                {
                    f = 1;
                    cout << a[i] << " " << d / a[i] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}