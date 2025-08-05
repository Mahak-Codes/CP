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
    int c1 = 0, c2 = 0, turn = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (turn == 0)
        {
            if (a[i] <= a[j])
            {
                c1 += a[j];
                j--;
            }
            else{
                c1 += a[i];
                i++;
            }
        }
        else{
            if (a[i] <= a[j])
            {
                c2 += a[j];
                j--;
            }
            else{
                c2 += a[i];
                i++;
            }
        }
        turn=!turn;
    }
    cout << c1 << " " << c2 << endl;
    return 0;
}