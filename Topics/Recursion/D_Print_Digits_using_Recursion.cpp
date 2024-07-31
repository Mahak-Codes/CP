#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void print(int n){
    if(n==0){
        return;
    }
    print(n/10);
    cout<<n%10<<" ";
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(n==0){
            cout<<0<<endl;
        }
        print(n);
        cout<<endl;
    }

    

    return 0;
}