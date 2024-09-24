#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    int mini=(n+1)/2;
    int ans=(mini+m-1)/m*m;
    if(ans>n){
        cout<<-1<<endl;
    }
    else{
       cout<<ans<<endl;
    }
    return 0;
}