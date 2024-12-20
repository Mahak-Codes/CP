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
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int ans=0;
        int kn=1;
        while(kn<=r2){
            int lb1=(l2+kn-1)/kn;
            int lb2=l1;
            int ub1=(r2/kn);
            int ub2=r1;
            int lb=max(lb1,lb2);
            int ub=min(ub1,ub2);
            if(lb<=ub){
                ans+=ub-lb+1;
            }
            kn*=k;
        }   
        cout << ans << endl;
    }
    return 0;
}
