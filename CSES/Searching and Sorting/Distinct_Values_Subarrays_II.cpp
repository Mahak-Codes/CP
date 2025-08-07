#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mp;
    int i=0,j=0,cnt=0;
    int ans=0;
    while(j<n){
      mp[a[j]]++;
      if(mp[a[j]]==1){
        cnt++;
      }
      if(cnt>k){
        while(cnt>k && i<n){
            mp[a[i]]--;
            if(mp[a[i]]==0 ){
                cnt--;
            }
            i++;
        } 
       }
        if(cnt<=k){
           ans+= j-i+1;
        }
      j++;
    }
    cout<<ans<<endl;
  

    return 0;
}