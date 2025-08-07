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
        int n,k;
        cin>>n>>k;
        int cnt=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
               cnt++;
            }
        }
        if(cnt>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}