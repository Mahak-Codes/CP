#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define soa(arr) accumulate(arr.begin(), arr.end(), 0)
#define mod 1e7 + 7
#define vi vector<int>

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n, k, ans = 0;
    cin >> n >> k;
    vi v(n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      mp[v[i]]++;
    }

    for (auto [x, y] : mp)
    {
      int c = k - x;
      if (mp.count(c))
      {
        int p = min(y, mp[c]);
        if (c == x)
        {
          p /= 2;
        }
        ans += p;
        mp[x] -= p;
        mp[c] -= p;  
      }
    }

    cout << ans << endl;
  }

  return 0;
}
