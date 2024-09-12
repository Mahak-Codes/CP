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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> psum1(n, 0);
    psum1[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        psum1[i] = psum1[i - 1] + v[i];
    }
    sort(v.begin(), v.end());
    vector<int> psum2(n, 0);
    psum2[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        psum2[i] = psum2[i - 1] + v[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int ty, l, r;
        cin >> ty >> l >> r;
        if (l - 2 >= 0)
        {

            if (ty == 1)
            {
                cout << psum1[r - 1] - psum1[l - 2] << endl;
            }
            else
            {
                cout << psum2[r - 1] - psum2[l - 2] << endl;
            }
        }
        else
        {
           
            if (ty == 1)
            {
                cout << psum1[r - 1]  << endl;
            }
            else
            {
                cout << psum2[r - 1] << endl;
            }
        }
    }
    return 0;
}