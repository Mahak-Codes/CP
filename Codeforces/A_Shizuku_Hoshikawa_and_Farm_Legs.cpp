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
        int b=0,cnt=0;
        if(n%4!=0){
            b=1;
        }
        for(b;b<=n/2;b++){
            int a= n-2*b;
            if(a%4==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}