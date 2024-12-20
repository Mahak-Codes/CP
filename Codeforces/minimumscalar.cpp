#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    int ts=t;
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
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(a[i]*b[i]);
        }
        cout<< "Case #"<<ts-t<<": "<<ans<<endl;
    }

    

    return 0;
}