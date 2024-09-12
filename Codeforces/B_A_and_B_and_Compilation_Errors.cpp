#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    map<int,int>mp;
    map<int,int>mp2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        mp[x]--;
        mp2[x]++;
    }
    for(auto x:mp){
        if(x.second==1){
            cout<<x.first<<endl;
        }
    }
    for(int i=0;i<n-2;i++){
        int x;
        cin>>x;
        mp2[x]--;
    }
     for(auto x:mp2){
        if(x.second==1){
            cout<<x.first<<endl;
        }
    }
    
    return 0;
}