#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void tc(int n,int a,int c,int b){
    if(n==0){
        return;
    }
    tc(n-1,a,b,c);
    cout<<a<<" "<<c<<endl;
    tc(n-1,b,c,a);
}

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int p=1<<n;
    cout<<p-1<<endl;
    tc(n,1,3,2);
    return 0;
}