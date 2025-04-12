#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,v;
    cin>>n>>v;
    vector<int>ans;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        int ok=0;
        for(int i=0;i<k;i++){
           int x;
           cin>>x;
           if(x<v){
            ok=1;
           }
        }
        if(ok){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}