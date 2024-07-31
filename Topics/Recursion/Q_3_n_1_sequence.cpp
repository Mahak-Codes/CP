#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int print(int n){
    if(n==1){  
        return 1;
    }
    if(n&1){
        n=3*n+1;
        return 1+print(n);
    }
    else{
        n/=2;
        return 1+print(n);
    } 
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int cnt=0;
    cout<<print(n);
    return 0;
}