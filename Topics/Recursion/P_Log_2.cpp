#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int solve(int n){
    if(n==0 ||n==1){
        return 0;
    }
    return 1+solve(n/2);
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    cout<<solve(n);

    return 0;
}