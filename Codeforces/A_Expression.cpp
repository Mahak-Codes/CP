#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max({a*b*c,a,b,c,(a+b)*c,a*(b+c),a+b+c});
    cout<<maxi<<endl;
    return 0;
}