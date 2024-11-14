#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    string s;
    cin>>s;
    int n=s.size();
    int rem=0;
    string ans="";
    for(int i=0;i<n;i++){
        if(!rem ){ 
            if(s[i]=='.'){
               ans+='0';
            }
            else{
                rem=1;
            }
        }
        else{
            if(s[i]=='.'){
                ans+='1';
               
            }
            else{
                ans+='2';
            }
            rem=0;

        } 
    }
    cout<<ans<<endl;
    

    return 0;
}