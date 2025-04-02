#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int maxdigit(int n){
    int maxi=-1;
    while(n>0){
        int d=n%10;
        n/=10;
        maxi=max(maxi,d);
    }
    return maxi;
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int cnt=0;
    while(n>0){
        n-=maxdigit(n);
        cnt++;
    }
    cout<<cnt<<endl;
    

    return 0;
}