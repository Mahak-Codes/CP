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
        int n,d;
        cin>>n>>d;
        map<int,int>mp;
        for(int i=0;i<n;i++){ 
            int x;
            cin>>x;
            mp[x]++;
        }
        int mx=INT_MIN;
        int prev=-2,cnt=0;
        int st=0;
        for(auto p:mp){
            if(p.first-prev!=1){
                st=p.first;
                cnt=0;
            } 
            else if(p.first-st +1 >d){
                cnt-=mp[st];
                st++;
            }
            cnt+=p.second;
            mx=max(mx,cnt);
            prev=p.first;
          
        }
        cout<<mx<<endl;
    }
    return 0;
}