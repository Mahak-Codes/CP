#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int  power(int a, int b,int &ans) {
    while(b>0){
        if(b%2==1){
           ans=ans*a;
        }
        a=a*a;
        b/=2;
    }
    return ans;
    
}
int pow2(int a,int b){
    if(b==0){
        return 1;
    }
    int ans=pow(a,b/2)*pow(a,b/2);
    if(b%2==1){
        return ans*a;
    }
    return ans;
}
int32_t main() {
    mahak_codes
    int a,b;
    cin>>a>>b;
    
    int ans=1;
    power(a,b,ans);
    cout<<ans<<endl;

    

    return 0;
}