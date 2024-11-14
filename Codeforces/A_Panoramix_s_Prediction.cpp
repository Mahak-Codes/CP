#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes  ios_base::sync_with_stdio(false);  cin.tie(nullptr);
bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int32_t main()
{
    mahak_codes 
    int n, m, f = 0;
    cin >> n >> m;
    for (int i = n + 1; i < m; i++)
    {
        if (isprime(i))
        {
            cout << "NO";
            f = 1;
            break;
        }
    }
    if (!f)
    {
        if (!isprime(m))
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }

    return 0;
}