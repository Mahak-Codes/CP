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
        string ans = "YES";
        vector<int> a(n + 1);
       
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int y=2*a[1]-a[2];
        if(y%(n+1)!=0){
            ans="NO";
        }
        y/=(n+1);
        int x=y-a[1]+a[2];
        if(x<0 ||y<0){
            ans="NO";
        }

        for(int i=1;i<=n;i++){
            a[i]= a[i]-x*i;
            a[i]=a[i]-(n-i+1)*y;
            if(a[i]!=0){
                ans="NO";
            }
        }
        cout<<ans<<endl;
       
    }
    return 0;
}