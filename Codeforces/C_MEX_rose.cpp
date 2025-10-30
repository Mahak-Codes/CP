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
        vector<int>a(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int ans=0;
        for(int i=0;i<k;i++){
            if(mp[i]==0){
                ans++;
            }
        }
       cout<< max(mp[k],ans)<<endl;
         
    }
    return 0;
}