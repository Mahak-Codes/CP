#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ans = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k == 0) {
                int g = 0;
                for (int i = k; i < n; i++) {
                    g = __gcd(g, abs(v[i] - v[i - k]));
                }
                ans += (g!=1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
