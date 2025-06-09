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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, f = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (f == 0)
                {
                    f = 1;
                    i += (x-1);
                    if (i >= n)
                    {
                        cnt = 1;
                        cout << "YES" << endl;
                        break;
                    }
                }
                else{
                    cnt=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(!cnt){
            cout<<"YES"<<endl;
        }
    }

    return 0;
}