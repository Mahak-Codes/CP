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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < m; i++){
            cin >> b[i];
        } 
        sort(b.begin(), b.end()); 
        int curr = -1e18, ans = 0,maxi=LLONG_MAX;
        for (int i = 0; i < n; i++){
            int ch1 = maxi, ch2 = maxi;
            if(a[i] >= curr){
                ch1 = a[i];
            } 
            int need = curr + a[i];
            auto it = lower_bound(b.begin(), b.end(), need);
            if(it != b.end()){
                ch2 = *it - a[i];
            }
            int mini = min(ch1, ch2);
            if(mini == LLONG_MAX){
                ans =1;
                cout<<"NO"<<endl;
                break;
            }
            curr = mini;
        }
        if (!ans)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
