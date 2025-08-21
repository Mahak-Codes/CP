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
        string a,b,c;
        cin>>a;
        int m;
        cin>>m;
        cin>>b>>c;
        string ed="",st="";
        for(int i=0;i<m;i++){
            if(c[i]=='D'){
                ed+=b[i];
            }
            else{
                st=b[i]+st;
            }
        }
        string ans=st+a+ed;
        cout<<ans<<endl;
    }
    return 0;
}