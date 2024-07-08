#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main()
{
    int n, x;
    cin >> n >> x;

    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    sort(w.begin(), w.end(), greater<int>());
    int l = 0, r = n - 1, ans = 0;
    while (l <= r)
    {
        if (w[l] + w[r] <= x)
        {
            ans++;
            l++;
            r--;
        }
        else{
            ans++;
            l++;
        }
    }
    cout<<ans<<endl;

    return 0;
}