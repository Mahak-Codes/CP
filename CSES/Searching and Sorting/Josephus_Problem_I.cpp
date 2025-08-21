#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>vis(n+1);
    vector<int>ans;
    int cnt=0,curr=1,skip=1;
    while (cnt<n)
    {
        if(!vis[curr]){
            if(!skip){
                cnt++;
                ans.push_back(curr);
                vis[curr]=1;
                skip=1;
            }
            else{
                skip=0;
            }
        }
        curr++;
        if(curr>n){
            curr=1;
        }
        
    }
    for(auto x:ans){
        cout<<x<<" ";
    }

    return 0;
}