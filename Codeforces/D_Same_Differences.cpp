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
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(mp.find(a[i]-i)!=mp.end()){
                ans+=mp[a[i]-i];
            }
            mp[a[i]-i]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}