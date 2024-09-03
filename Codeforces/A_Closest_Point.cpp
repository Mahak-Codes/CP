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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==2){
            if(abs(a[0]-a[1])==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }

        }
        else{
            cout<<"NO"<<endl;
        }
    }

    

    return 0;
}