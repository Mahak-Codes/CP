#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>indegree(n,0);
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        indegree[y-1]++;
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(indegree[i]==n-1){
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}