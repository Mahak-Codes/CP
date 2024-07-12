#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int prev=INT_MAX;
    int ans=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]=i;
    }
    for(int i=1;i<=n;i++){
        if(mp[i]<prev){
            ans++;
        }
        prev=mp[i];
    }
    cout<<ans<<endl;
    return 0;
}