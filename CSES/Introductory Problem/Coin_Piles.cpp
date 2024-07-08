#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a<b){
       swap(a,b);
    }
    if((2*b-a <0)|| ((2*b-a) %3) || ((2*a-b) %3)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
    return 0 ;
}