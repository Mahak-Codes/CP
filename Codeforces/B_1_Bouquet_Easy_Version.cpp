#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
  
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        } 
        sort(v.begin(), v.end());
        int maxi = 0, start = 0, end = 0;
        int cur = 0, temp = 0;

        while (end < n ) {
            cur += v[end];
            while (start<n && (cur > m || (v[end] - v[start] > 1))) {
                cur -= v[start];   
                start++;
            }
            maxi = max(maxi, cur);
            end++;
        }
        cout << maxi << endl;
    }
            
    return 0;
}