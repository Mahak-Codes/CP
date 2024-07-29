#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    fastio
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int f=0;
        map<int,int,greater<int>>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second % 2==1){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        if(!f){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}