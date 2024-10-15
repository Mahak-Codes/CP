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
        string s,t;
        cin>>s>>t;
        int n=s.size();
        int m=t.size();
        int x=0;
        for(int i=0;i<min(n,m);i++){
            if(s[i]==t[i]){
                x++;
            }
            else{
                break;
            }
        }
        int ans=n+m-max(x-1,0LL);
        cout<<ans<<endl;
    }
    return 0;
}