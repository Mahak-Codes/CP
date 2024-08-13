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
        int l = 1, r = 999;
        while (l != r)
        {
            int mid = (l + r + 1) / 2;
            cout<<'?'<<" "<<l<<" "<<mid;
            fflush(stdout);
            int res;
            cin>>res;
            if(res==l*r){
               l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        printf("! %d\n", l);
        fflush(stdout);
    }

    return 0;
}