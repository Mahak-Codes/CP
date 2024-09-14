#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        if(q-p>=2){
            cnt++;
        } 
    }
    cout<<cnt<<endl;
    return 0;
}