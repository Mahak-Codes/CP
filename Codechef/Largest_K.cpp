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
        map<int,int,greater<int>>mp;
        vector<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
           mp[x]++;
        }
        for(auto x:mp){
            s.push_back(x.second);
        }
        sort(s.begin(),s.end(),greater<int>());
        int di=0,maxi=0,cnt=0;
        for(auto x:s){
            di++;
            cnt+=x;
            maxi=max(maxi,(cnt/di)*di);
        }
        cout<<maxi<<endl;
    }
    return 0;
}