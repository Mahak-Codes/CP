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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=0;
        for (int i = 0; i < n; ++i) {
            int m = a[i]; 
            int s = (i + 1 < n) ? b[i + 1] : 0; 
            int d=m-s;
            if(d>0){
                ans+=d;
            }
            
        }

        cout<<ans<<endl;
    }

    

    return 0;
}