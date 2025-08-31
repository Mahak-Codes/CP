#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve(int n,char src,char spare,char target){
    if(n==0){
        return;
    }
    solve(n-1,src,target,spare);
    cout<<src<<" "<<target<<endl;
    solve(n-1,spare,src,target);
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int step=(1<<n)-1;
    cout<<step<<endl;
    solve(n,'1','2','3');
    return 0;
}