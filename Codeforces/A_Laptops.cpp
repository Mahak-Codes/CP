#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first > p2.first)
    {
        return p1.first < p2.first;
    }
    if (p1.first == p2.first)
    {
        return p1.second < p2.second;
    }
    return true;
}
int32_t main()
{
    mahak_codes int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int f = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second >= maxi)
        {
            maxi = v[i].second;
        }
        else
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        cout << "Happy Alex" << endl;
    }
    else
    {
        cout << "Poor Alex" << endl;
    }

    return 0;
}