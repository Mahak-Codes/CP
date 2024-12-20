#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int m,p;
        cin>>m>>p;
        vector<vector<int>>v(100,vector<int>());
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            for(int j=x;j<=y;j++){
                v[i].push_back(j);
            }
        }
        
    }

    

    return 0;
}