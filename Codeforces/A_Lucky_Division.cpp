#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool islucky(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!='4' && s[i]!='7'){
            return false;
        }
    }
    return true;
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int f=0;
    for(int i=1;i<=n;i++){
        string s=to_string(i);
        if(islucky(s) && n%i==0){
            f=1;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(!f){
        cout<<"NO"<<endl;
    }

    

    return 0;
}