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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt=0;
        if(a<b){
            cnt++;
        }
        if(a<c){
            cnt++;
        }
         if(a<d){
            cnt++;
        }
        cout<<cnt<<endl;
    } 
    return 0;
}