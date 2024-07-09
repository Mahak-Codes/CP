#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int binarysearch(int l, int h, vector<int> &a, vector<int> &mini, int target)
{
    int ans = -1;
    while (l<=h)
    {
        int mid = l + (h - l) / 2;
        if (a[mini[mid]] < a[target])
        {
            ans = mini[mid];
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int32_t main()
{
    mahak_codes
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> mini(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[n - i - 1];
    }
    int mi = 0;
    mini[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if(a[mi]>a[i]){
            mi=i;
        }
        mini[i] = mi;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int ans1= binarysearch(0, i, a, mini, i);
        if (ans1 != -1)
        {
            ans1 = i - ans1 - 1;
        }
        cout << ans1 << " ";
    }

    return 0;
}