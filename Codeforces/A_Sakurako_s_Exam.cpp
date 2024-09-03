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
        int a,b;
        cin>>a>>b;
        int sum=a+2*b;
        if(sum&1){
            cout<<"NO"<<endl;
        }
        else{
            sum/=2;
            if(sum&1){
                if(a>=1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }

    

    return 0;
}