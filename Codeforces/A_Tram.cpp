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
    int curr = 0;
    int in, out, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> out >> in;
        curr -= out;

        curr += in;
        maxi = max(curr, maxi);
    }
    cout << maxi << endl;
    return 0;
}