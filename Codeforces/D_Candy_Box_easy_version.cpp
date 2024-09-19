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
        vector<int>cnt;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto x:mp){
            cnt.push_back(x.second);
        }
        sort(cnt.begin(),cnt.end(),greater<int>());
        int ls=cnt[0];
        int ans=ls;
        for(int i=1;i<cnt.size();i++){
           
            if(cnt[i]<ls){
                ans+=cnt[i];
                ls=cnt[i];
            }
            else if(ls-1>0){
                ans+=ls-1;
                ls=ls-1;
            }
        }
        cout<<ans<<endl;
       
    }

    

    return 0;
}