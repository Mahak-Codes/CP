#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    if(n&1){
        cout<<-1<<endl;
    }
    else{
        for(int i=n;i>=1;i--){
            cout<<i<<" ";
        }
    }

    

    return 0;
}