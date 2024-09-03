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
        int n;
        cin >> n;
        vector<int> a(n + 1),ans(n + 1),vis(n + 1);
        string s;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        cin >> s;
        s = " " + s; 
        for (int i = 1; i <= n; ++i) {
            if (!vis[i]) {
                int c = i;
                vector<int> b;
                int bcnt = 0;
                while (!vis[c]) {
                    if (s[c] == '0') {
                        bcnt++;
                    }
                    vis[c] = 1;
                    b.push_back(c);
                    c = a[c];
                }
                for (int x : b) {
                    ans[x] = bcnt;
                }
            }
        }
        for (int i = 1; i <= n; ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
