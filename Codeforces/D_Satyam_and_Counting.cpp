#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes  ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main()
{
    mahak_codes 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<pair<int,int>,int>mp;
        vector<int>cnt(2);

        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            mp[{x,y}]++;
            cnt[y]++;
        }
        int ans = 0;
        for(auto p:mp){
            int x=p.first.first;
            int y=p.first.second;
            if(mp.count({x,1-y})){
                ans+=cnt[y]-1;
            }
            if(mp.count({x+1,1-y})&& mp.count({x-1,1-y})){
                ans++;
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}