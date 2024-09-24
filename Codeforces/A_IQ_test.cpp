#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int n, c = 0, odd = 0, even = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] & 1)
        {
            c++;
            odd = i;
        }
        else
        {
            even = i;
        }
    }
    if (c == 1){
        cout << odd + 1;
    }
    else{
        cout << even + 1;
    }

    return 0;
}