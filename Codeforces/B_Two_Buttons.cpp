#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int n, m;
    cin >> n >> m;
    int cnt = 0;
    if (m < n)
    {
        cout << n - m << endl;
    }
    else
    {
        int ans = 0, cnt2 = 0;
        if(m%2==1){
            m++;
            cnt++;
        }
        while (m % 2 == 0 && n != m && m>n)
        {
            
            m /= 2;
            if(m%2==1 && m>n ){
               m++;
               cnt++;
            }
            cnt++;
        }
        if (m < n)
        {
            ans = cnt + n - m;
        }
        else if (m == n)
        {
            ans = cnt;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}