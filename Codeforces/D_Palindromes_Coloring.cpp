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
        int n,k;
        cin>>n>>k;
        int p=0,si=0;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto f:mp){
            int freq=f.second;
            p+=(freq/2);
            si+=(freq%2);
        }
        int ans=2*(p/k);
        si+=2*(p%k);
        if(si>=k){
            ans++;
        }
        cout<<ans<<endl; 
    }
    return 0;
}