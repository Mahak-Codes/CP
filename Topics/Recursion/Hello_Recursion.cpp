#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
int sum(vector<int> a, int i)
{
    if (i >= a.size())
    {
        return 0;
    }
    return a[i] + sum(a, i + 1);
}
int32_t main()
{
    mahak_codes int t;
    cin >> t;
    int temp = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Case " << temp << ":" << " " << sum(a, 0)<<endl;
        temp++;
    }

    return 0;
}