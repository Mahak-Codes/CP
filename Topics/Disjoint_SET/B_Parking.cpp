#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

class Disjoint {
    int n;
    vector<int> par, sz;

public:
    vector<bool> occupied;

    Disjoint(int size) {
        n = size;
        par.resize(n + 2);
        sz.resize(n + 2, 1);
        occupied.resize(n + 2, false);
        for (int i = 0; i <= n + 1; i++) {
            par[i] = i;
        }
    }

    int find(int x) {
        if (x == par[x]) return x;
        return par[x] = find(par[x]);
    }

    void solve(vector<int>& p, vector<int>& ans) {
        int n = p.size() - 1; 
        for (int i = 1; i <= n; ++i) {
            int desired = p[i];
            int freeSpot = find(desired);
            if (freeSpot == n + 1) {
                freeSpot = find(1); 
            }
            ans[i] = freeSpot;
            par[freeSpot] = find(freeSpot + 1); 
        }
    }

};

int32_t main() {
    mahak_codes
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    vector<int> ans(n + 1);
    Disjoint graph(n);
    graph.solve(p, ans);
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
