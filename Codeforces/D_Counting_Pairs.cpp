#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

typedef tree<pair<int, int>, null_type, 
less<pair<int, int>>, rb_tree_tag, 
tree_order_statistics_node_update> pbds;

int32_t main()
{
    mahak_codes
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int sum = 0;
        int ub = 0, lb = 0;
        vector<int> a(n);
        int maxi=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxi=max(maxi,a[i]);
            sum += a[i];
        }
        ub = sum - y;
        lb = sum - x;
        int ans=0;
        pbds s; 
        for (int j = 0; j < n; j++)
        {
            int v2 = lb - a[j];
            int v1 = ub - a[j];
            
            if(v1<0){
                v1=0;
            }
            if(v2>maxi){
                v2=maxi;
            }
           
            int cnt =0;
            if (v2 >= v1) {
                cnt = s.order_of_key({v2 + 1, 0}) - s.order_of_key({v1, 0});
            }
            s.insert({a[j],j});
            ans+=cnt;
        }
        cout << ans << endl;
    }

    return 0;
}