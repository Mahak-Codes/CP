#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    string s;
    cin>>s;
    if(s[0]>=97){
        s[0]= s[0]-32;
    }
    cout<<s<<endl;
    return 0;
}