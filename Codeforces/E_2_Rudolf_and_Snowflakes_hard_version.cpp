#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
int maxi = 1e6;
int maaxSum = 1e18;
set<int> s;
void precompute()
{
    for (int k = 2; k <= maxi; k++)
    {
        int val = 1 + k;
        int in_k = k * k;
        while (val < maaxSum)
        {
            val += in_k;
            s.insert(val);
            if (in_k > (maaxSum / k))
            {
                break;
            }
            in_k *= k;
        }
    }
}
bool check(int n)
{
    int d = 4 * n - 3;
    int sq = sqrt(d);
    int sqd = -1;
    for (int i = max(0LL, sq - 5); i <= sq + 5; i++)
    {
        if (i * i == d)
        {
            sqd = i;
            break;
        }
    }
    if (sqd != -1 && (sqd - 1) % 2 == 0 && (sqd - 1) / 2 > 1)
    {
        return 1;
    }
    return 0;
}

int32_t main()
{
    mahak_codes 
    int t;
    cin >> t;
    precompute();
    while (t--)
    {
        int sum;
        cin >> sum;
        string ans = "NO";
        if (check(sum))
        {
            ans = "YES";
        }
        if (s.find(sum) != s.end())
        {
            ans = "YES";
        }
        cout << ans << endl;
    }

    return 0;
}
