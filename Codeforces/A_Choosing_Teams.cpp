#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,k;
    cin>>n>>k;
    int cnt=0;
    for(int i=0;i<n;i++){
        int yi;
        cin>>yi;
        int v=5-yi;
        if(v>=k){
            cnt++;
        }
    }
    int ans=cnt/3; 
    cout<<ans<<endl;
    return 0;
}