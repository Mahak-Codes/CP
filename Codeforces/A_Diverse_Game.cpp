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
        int n, m;
        cin >> n >> m;
        vector<int> v(n * m);
        for (int i = 0; i < n * m; i++)
        {
            cin >> v[i];
        }
        if (n == 1 && m == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            reverse(v.begin(), v.end());
             if ((n * m) % 2 == 1)
            {
                int in = (n * m) / 2;
                swap(v[0], v[in]);
            }

            for (int i = 0; i < n * m; i++)
            {
                cout << v[i] << " ";
              
                  if((i+1) % (m) == 0 )
                    {
                    cout << endl;
                   }   
                
            }
            
        }
    }

    return 0;
}