#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        bool cnt = false;
        
        for(int i = 1; i < n; i++) {
            if(v[i].first - v[i-1].second >= s) {
                cnt = true;
                break;
            }
        }
        if(v[0].first >= s) {
            cnt = true;
        }
        if(m - v[n-1].second >= s) {
            cnt = true;
        }

        if(cnt) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
