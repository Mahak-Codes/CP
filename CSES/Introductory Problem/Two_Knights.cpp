#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
    int n;
    cin>>n;
    for(int k=1;k<=n;k++){
       int ways=(k*k)*(k*k-1)/2;
       int attacks=4*(k-1)*(k-2);
       cout<<ways-attacks<<endl;
    }

    return 0 ;
}