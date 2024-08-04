#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int solve(int i,int n){
    if(i==n){
        return true;
    }
    if(i>n){
        return false;
    }
    if((solve(i*10,n))||(solve(i*20,n))){
        return true;
    }
    return false;
}
int32_t main() {
    mahak_codes
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(solve(1,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
    

    

    return 0;
}