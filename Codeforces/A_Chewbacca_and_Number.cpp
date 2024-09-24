#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    string s;
    cin>>s;
    if(s[0]!='9'){
        int x=s[0]-'0';
        if(x>9-x){
           s[0]=(9-x)+'0';
        }
    }
    for(int i=1;i<s.size();i++){
        int x=s[i]-'0';
        if(x>9-x){
            s[i]=(9-x)+'0';;
        }
    }
    cout<<s<<endl;

    

    return 0;
}