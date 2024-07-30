#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false);cin.tie(nullptr);
bool isvalid(int i, int n)
{
    return i >= 0 && i + 1 >= 0 && i + 2 >= 0 && i < n && i + 1 < n && i + 2 < n;
}
int32_t main()
{
    mahak_codes 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        n = unique(a.begin(), a.end()) - a.begin();
        int ans = n;
        for (int i = 0; i + 2 < n; ++i)
        {
            ans -= (a[i] < a[i + 1] && a[i + 1] < a[i + 2]);
            ans -= (a[i] > a[i + 1] && a[i + 1] > a[i + 2]);
        }
        cout << ans << endl;
    }
    return 0;
}
