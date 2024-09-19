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
        string ans="NO";
        for(int i=0;i<11;i++){
            if(i*111<=n && (n-(i*111))%11==0){
                ans="YES";
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}