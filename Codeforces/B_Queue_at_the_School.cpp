#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    string ans=s;
    while(t--){
        for(int i=0;i<n-1;i++){
            if(s[i]=='B'&& s[i+1]=='G'){
                swap(ans[i],ans[i+1]);
            }
 
        }
        s=ans;
    }
    cout<<ans<<endl;

    return 0;
}