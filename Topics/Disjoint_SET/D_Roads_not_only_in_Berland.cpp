#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

struct DSU {
    vector<int> f, siz;
    
    DSU() {}
    DSU(int n) {
        init(n);
    }
    
    void init(int n) {
        f.resize(n);
        iota(f.begin(), f.end(), 0);
        siz.assign(n, 1);
    }
    
    int leader(int x) {
        while (x != f[x]) {
            x = f[x] = f[f[x]];
        }
        return x;
    }
    
    bool same(int x, int y) {
        return leader(x) == leader(y);
    }
    
    bool merge(int x, int y) {
        x = leader(x);
        y = leader(y);
        if (x == y) {
            return false;
        }
        siz[x] += siz[y];
        f[y] = x;
        return true;
    }
    
    int size(int x) {
        return siz[leader(x)];
    }
};

int32_t main() {
    mahak_codes
    int n;
    cin >> n;
    
    vector<pair<int, int>> a, b;
    DSU dsu(n);
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        if (!dsu.merge(u, v)) {
            a.push_back({u + 1, v + 1});
        }
    }
    for (int i = 0; i < n; i++) {
        if (dsu.merge(0, i)) {
            b.push_back({1, i + 1});
        }
    }
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i].first << " " << a[i].second << " " << b[i].first << " " << b[i].second << endl;
    }
    
    return 0;
}
