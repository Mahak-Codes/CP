#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=n-1;i>0;i-=2){
        if(s[i-1]==s[i]){
            continue;
        }
        if(s[i-1]=='H' && s[i]=='G'&& ans%2==1){
            ans++;
        }
        else if(s[i-1]=='G' && s[i]=='H'&& ans%2==0){
            ans++;
        }
    }
    cout<<ans<<endl;


    

    return 0;
}