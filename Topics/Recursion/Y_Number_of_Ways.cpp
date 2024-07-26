#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int  ways(int a,int b){
    if((a==b)){
       return 1;
    }
    if(a>b){
        return 0;
    }
    return ways(a+1,b)+ways(a+2,b)+ways(a+3,b);
}
int32_t main() {
    mahak_codes
    int a,b;
    cin>>a>>b;
    cout<<ways(a,b)<<endl;

    return 0;
}