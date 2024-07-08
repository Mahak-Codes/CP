#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
unordered_map<int, int> parent;
void dfs(int node, int par, vector<vector<int>> &adj, vector<int> &vis, int &toCycle, int &fromCycle)
{
    vis[node] = 1;
    for (auto x : adj[node])
    {
        if (x == par)
        {
            continue;
        }
        else
        {
            if (vis[x] == 1)
            {
                toCycle = x;
                fromCycle = node;
                return;
            }
            else
            {
                parent[x] = node;
                dfs(x, node, adj, vis, toCycle, fromCycle);
            }
        }
    }
}
int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<int> vis(n + 1, 0);
    int fromCycle = -1, toCycle = -1;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, -1, adj, vis, toCycle, fromCycle);
            if (toCycle != -1)
            {
                break;
            }
        }
    }
    if (toCycle == -1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        vector<int> cycle;
        cycle.push_back(fromCycle);
        for (int i = toCycle; i != fromCycle; i = parent[i])
        {
            cycle.push_back(i);
        }
        cycle.push_back(fromCycle);

        cout << cycle.size() << endl;
        for (int i = 0; i < cycle.size(); i++)
        {
            cout << cycle[i] << " ";
        }
    }

    return 0;
}