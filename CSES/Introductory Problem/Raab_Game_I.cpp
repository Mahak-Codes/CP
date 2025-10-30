#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if((a==0 ||b==0)&& (a+b)!=0){
            cout<<"NO"<<endl;
            continue;
        }
        if(a+b>n){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i=a+1;i<=a+b;i++){
            cout<<i<<" ";
        }
        for(int i=1;i<=a;i++){
            cout<<i<<" ";
        }
        for(int i=a+b+1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}