#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string ans = "";
        int i = 0, j = n - 1;
        while (i <= j && i < n && j >= 0)
        {
            if (a[i] < a[j])
            {
                ans += 'R';
                j--;
                if (i <= j && i < n && j >= 0)
                {
                    if (a[i] < a[j])
                    {
                        ans += 'L';
                        i++;
                    }
                    else
                    {
                        ans += 'R';
                        j--;
                    }
                }
            }
            else
            {
                ans += 'L';
                i++;
                if (i <= j && i < n && j >= 0)
                {
                    if (a[i] < a[j])
                    {
                        ans += 'L';
                        i++;
                    }
                    else
                    {
                        ans += 'R';
                        j--;
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}