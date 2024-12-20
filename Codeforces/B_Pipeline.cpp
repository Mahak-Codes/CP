#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
int sum(int n)
{
    return (n * (n + 1)) / 2;
}
int32_t main()
{
    mahak_codes 
    int n, k, mid;
    cin >> n >> k;
    n = n - 1;
    int maxi = sum(k - 1);
    int l = 0, r = k - 1;
    if (maxi < n)
    {
        cout << "-1" << endl;
    }
    else
    {

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            int curr = maxi - sum(mid);
            if (curr < n)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        int ans = k - 1 - r;
        cout << ans << endl;
    }
    return 0;
}
