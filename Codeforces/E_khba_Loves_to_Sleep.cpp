#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

vector<vector<int>> merge(vector<vector<int>> &a)
{
    vector<vector<int>> ans;
    int n = a.size();
    sort(a.begin(), a.end());
    if (a.empty())
    {
        return ans;
    }
    vector<int> tmp = {a[0][0], a[0][1]};
    int i = 1;
    while (i < n)
    {
        int fend = tmp[1];
        int st = a[i][0];
        if (fend >= st)
        {
            tmp[1] = max(fend, a[i][1]);
        }
        else
        {
            ans.push_back(tmp);
            tmp = {a[i][0], a[i][1]};
        }
        i++;
    }
    ans.push_back(tmp);
    return ans;
}
bool check(int mid, vector<int> a, int x, int k)
{
    vector<vector<int>> in;
    for (auto v : a)
    {
        int l = max(0LL, v - (mid - 1));
        int r = min(x, v + (mid - 1));
        if (l <= r)
        {
            in.push_back({l, r});
        }
    }
    vector<vector<int>> nd = merge(in);
    int cnt = 0, prev = 0;
    for (auto &v : nd)
    {
        if (prev < v[0])
        {
            cnt += (v[0] - prev);
            if (cnt >= k)
            {
                return true;
            }
        }
        prev = v[1] + 1;
    }

    if (prev <= x)
    {
        cnt += (x - prev + 1);
    }
    return cnt >= k;
}

int32_t main()
{
    mahak_codes int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int l = 0, h = x + 1;
        while (l + 1 < h)
        {
            int mid = (l + h) / 2;
            if (check(mid, a, x, k))
            {
                l = mid;
            }
            else
            {
                h = mid;
            }
        }
        int dis = l;
        vector<vector<int>> in;
        for (auto v : a)
        {
            int l = max(0LL, v - (dis - 1));
            int r = min(x, v + (dis - 1));
            if (l <= r){
                in.push_back({l, r});
            }
        }
        vector<vector<int>> nd = merge(in);
        int prev = 0;
        for (auto &v : nd)
        {
            while (prev < v[0] && (int)ans.size() < k)
            {
                ans.push_back(prev);
                prev++;
            }
            prev = v[1] + 1;
            if (ans.size() >= k){
                break;
            }
        }

        while (prev <= x && ans.size() < k)
        {
            ans.push_back(prev);
            prev++;
        }
        for (int v : ans)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}