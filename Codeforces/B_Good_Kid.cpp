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
        int n;
        cin>>n;
        vector<int>a(n);
        int f=0;
        int maxi=-1,p=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0 && f==0){
               f=1;
               continue;
            }
            p*=a[i];
        }
        if(f){
            cout<<p<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                int pr=(p/a[i]);
                pr*=(a[i]+1);
                maxi=max(maxi,pr);
            }
            cout<<maxi<<endl;
        }
    }

    return 0;
}