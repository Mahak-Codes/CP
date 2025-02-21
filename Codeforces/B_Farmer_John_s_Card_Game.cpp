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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++)
    {
      a[i].resize(m);
      for (int j = 0; j < m; j++)
      {
        cin >> a[i][j];
      }
      sort(a[i].begin(), a[i].end());
    }

    vector<int> o(n);
    iota(o.begin(), o.end(), 0);

    sort(o.begin(), o.end(), [&](int x, int y)
         { return a[x][0] < a[y][0]; });

    int topCard = -1;
    bool valid = true;
    for (int r = 0; r < m; r++)
    {
      for (int i = 0; i < n; i++)
      {
        int idx = o[i];
        auto nextCard = upper_bound(a[idx].begin(), a[idx].end(), topCard);
        if (nextCard == a[idx].end())
        {
          valid = false;
          break;
        }
        topCard = *nextCard;
        a[idx].erase(nextCard);
      }
      if (!valid)
      {
        break;
      }
    }

    if (!valid)
    {
      cout << -1 << endl;
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        cout << o[i] + 1 << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
