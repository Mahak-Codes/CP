#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
vector<string>solve(int n){
    if(n==1){
        return {"0","1"};
    }
    vector<string>gc= solve(n-1);
    vector<string>ans;
    for(auto x:gc){
        ans.push_back("0"+x);
    }
    for(int i=gc.size()-1;i>=0;i--){
       ans.push_back( "1"+ gc[i]);
    }
    return ans;
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<string>ans= solve(n);
    for(auto x:ans){
        for(auto y:x){
            cout<<y;
        }
        cout<<endl;
    }
    return 0;
}