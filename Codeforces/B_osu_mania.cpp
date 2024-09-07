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
        char s[n][4];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>s[i][j];
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<4;j++){
                if(s[i][j]=='#'){
                    cout<<j+1<<" ";
                }
            }
        }
        cout<<endl;
    }

    

    return 0;
}