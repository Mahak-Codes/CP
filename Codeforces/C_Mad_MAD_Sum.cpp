#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

void f(vector<int> &a) {
    int n = a.size();
    set<int> s= {0};
    vector<int> mp(n + 1, 0);
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        if (mp[a[i]] > 1) {
            s.insert(a[i]);
        }
        a[i] = *s.rbegin();  
    }
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        f(a);
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        f(a);
        for (int i = 0; i < n; i++) {
            sum += (a[i] * (n - i));
        }
        cout << sum << endl;
    }
    return 0;
}
