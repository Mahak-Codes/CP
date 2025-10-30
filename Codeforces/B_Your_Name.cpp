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
        string s,tc;
        cin>>s>>tc;
        vector<int>v(26),z(26);
        for(auto x:s){
            v[x-'a']++;
        }
        for(auto x:tc){
            z[x-'a']++;
        }
        if(z==v){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    

    return 0;
}