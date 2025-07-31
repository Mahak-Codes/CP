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
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
 
        if(s[0]=='T' && s[1] =='i' && s[2]=='m' && s[3]=='r' && s[4]=='u' && n==5){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}