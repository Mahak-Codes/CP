#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int n;
    cin >> n;
    vector<int> a(n);
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int sum = 0;
    int ans = 0;
    while (l <= r)
    {
        if (l == r)
        {
            ans++;
            l++;
        }
        else
        {
            if (a[l] + a[r] == 4)
            {
                ans++;
                l++;
                r--;
            }
            else if (a[l] + a[r] > 4)
            {
                ans++;
                r--;
            }
            else
            {
                int sum = a[r];
                while (l < r && sum + a[l] <= 4)
                {
                    sum += a[l];
                    l++;
                }
                ans++;
                r--;
                
            }
        }
    }
    cout << ans << endl;

    return 0;
}