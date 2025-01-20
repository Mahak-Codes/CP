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
        vector<int> a(5, 0);
        for (int i = 0; i < 5; i++)
        {
            if (i == 2)
            {
                continue;
            }
            cin >> a[i];
        }
        int v1 = a[0] + a[1];
        int v2 = a[4] - a[3];
        int v3 = a[3] - a[1];
        vector<int> ch = {v1, v2, v3};
        int maxi = 0 ;
        for (int i = 0; i < 3; i++)
        {    
            int cnt=0;
            a[2] = ch[i];
            for (int i = 2; i < 5; i++)
            {
                if (a[i - 1] + a[i - 2] == a[i])
                {
                    cnt++;
                }
            }
            maxi=max(cnt,maxi);
        }
        cout<<maxi<<endl;
    }   

    return 0;
}