#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
    int n;
    cin>>n;
    int ans=0;
    while(n){
        n/=5;
       ans+=n;
    }
    cout<<ans<<endl;
    return 0 ;
}