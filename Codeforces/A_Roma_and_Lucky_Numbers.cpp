#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='7' || s[i]=='4'){
                cnt++;
            }
            if(cnt>k){
                break;
            }
        }
        if(cnt<=k){
            ans++;
        }
    }
    cout<<ans<<endl;

    

    return 0;
}