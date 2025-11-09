#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<vector<int>>v(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[i]={b,a};
    }
    sort(v.begin(),v.end());
    int ans=1,prev=v[0][0];
    int i=1;
    while(i<n){
        if(v[i][1]>=prev){
            ans++;
            prev=v[i][0];
        }
        i++;
    }
    cout<<ans<<endl;
    return 0;
}