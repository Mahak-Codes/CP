#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

bool check(int length, int mx) {
    int sum = length * (length + 1) / 2;
    return sum <= mx;
}

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int mx = b - a;
        int l = 1, r = sqrt(2 * mx) + 1;
        int ans = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (check(mid, mx)) {
                ans = mid; 
                l = mid + 1; 
            } else {
                r = mid - 1;
            }
        }

        cout << ans + 1 << endl; 
    }

    return 0;
}
