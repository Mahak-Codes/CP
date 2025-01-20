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
        int a, b, ans;
        cin >> a >> b;
        int diff = abs(b - a);
        if (diff <= 10)
        {
            ans = 1;
        }
        else
        {
            ans = diff / 10;
            if (diff % 10 != 0){
                ans++;
            }
        }
        if(a==b){
            ans=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}