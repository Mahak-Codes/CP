#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        // [b,a]
        v[i][1] = a;
        v[i][0] = b;
    }
    sort(v.begin(), v.end());
    int cnt = 1, prev = v[0][0];
    for (int i = 1; i < n; i++)
    {
        if (v[i][1] >= prev)
        {
            cnt++;
            prev = v[i][0];
        }
    }
    cout << cnt << endl;
    return 0;
}