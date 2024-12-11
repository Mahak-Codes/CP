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
        int n,k;
        cin>>n>>k;
        vector<int>ans,a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int curr=1,f=0;
        for (int i = 0; i < n; i++) {
            if ((a[i]&k) ==k) { 
                ans.push_back(i+1);
                curr &=a[i];
            }
        }
        
        if (!ans.empty() && curr==k) {
            cout << "YES" << endl;
            cout << ans.size()<<endl ;
            for (int x : ans) {
                cout << x << " "; 
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    

    return 0;
}