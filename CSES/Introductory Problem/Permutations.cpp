#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
void solve(int n)
{
    vector<int> ans;
    if (n == 1)
    {
        cout << 1;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        if (n & 1)
        {
            for (int i = 1; i <= n; i += 2)
            {
                cout << i << " ";
            }
            for (int i = 2; i <= n; i+=2)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int i = 2; i <= n; i+=2)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= n; i += 2)
            {
                cout << i << " ";
            }
        }
    }
}
int32_t main()
{
    int n;
    cin >> n;
    solve(n);

    return 0;
}