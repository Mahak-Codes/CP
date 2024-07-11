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
        int a,b,c;
        cin>>a>>b>>c;
        int mini;
        for(int i=0;i<5;i++){
            mini=min({a,b,c});
            mini==a?a+=1:b==mini?b+=1:c+=1;
        }
        cout<<a*b*c<<endl;
    }
    return 0;
}