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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n), c(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
            c[i] = a[i] - b[i];
        }
        sort(c.begin(), c.end());
        int f = 1;
        if (c[0] < 0)
        {
            int i = 1;
            while (i < n && f == true)
            {
                if (c[i] < abs(c[0])){
                    f = 0;
                } 
                i++;
            }
        }
        if (f){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}


