#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int solve(int k){
    int p=1,i=1;
    while(k>=i*9*p){
        k-= i*9*p;
        i++;
        p*=10;
    }
    int rem=k%i;
    k/=i;
    string ans=to_string(p+k);
    if(rem==0){
        return (p+k-1)%10;
    }
    return ans[rem-1]-'0';
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int k;
        cin>>k;
        cout<<solve(k)<<endl;
    }

    return 0;
}