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
        int n;
        cin >> n;
        int orr = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            orr = orr | a[i];
        }
        int cnt = 0,ans=0,temp=orr;
        while (temp > 0)
        {
            temp/= 2;
            cnt++;
        }
        int bits=cnt;
        for (int i = 0; i<cnt; i++)
        {
            if( (orr & ( 1 << i )) == 0){
                
                bits=i;
                break;
            }
        }
        int maxi=1<<bits;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>=maxi){
                ans++;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}