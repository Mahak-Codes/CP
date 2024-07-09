#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin >> n;
    map<int,int>x;
    map<int,int>y;
    map<pair<int,int>,int>p;
    for(int i=0;i<n;i++){
      int x1,y1;
      cin>>x1>>y1;
      x[x1]++;
      y[y1]++;
      p[{x1,y1}]++;
    }
    
    int ans=0;
    for(auto f:x){
        int pairs=((f.second)*(f.second-1))/2;
        ans+=pairs;
    }
    for(auto f:y){
        int pairs=((f.second)*(f.second-1))/2;
        ans+=pairs;
    }
    for(auto f:p){
        int pairs=((f.second)*(f.second-1))/2;
        ans-=pairs;
    }
    cout<<ans<<endl;
    

    return 0;
}