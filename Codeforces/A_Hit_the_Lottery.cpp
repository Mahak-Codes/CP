#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>c={100,20,10,5,1};
    int ans=0;
    int l=0;
    while(n){
        if(n>=c[l]){
            ans+=n/c[l];
            n=n%c[l];
        }
        else{
           l++;
        }    
    }
    cout<<ans<<endl;
    

    return 0;
}