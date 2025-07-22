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
        string s;
        cin>>s;
        char mini='9';
        for(int i=0;i<s.size();i++){
            if(s[i]<=mini){
                mini=s[i];
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}