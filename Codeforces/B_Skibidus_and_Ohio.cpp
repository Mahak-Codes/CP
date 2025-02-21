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
        int f=0;
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                f=1;
                break;
            }
        }
        if(f){
           cout<<1<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}