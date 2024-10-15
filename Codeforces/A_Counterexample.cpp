#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
int hcf(int a, int b)
{
    return (a * b) / lcm(a, b);
}
bool check(int a, int b, int c)
{
    if (hcf(a, b) == 1 && hcf(b, c) == 1 && hcf(a, c) != 1)
    {
        return true;
    }
    return false;
}
int32_t main()
{
    mahak_codes int l, r;
    cin >> l >> r;
    int f = 0;
    for (int a = l; a <= r; a++)
    {
        for (int b = a + 1; b <= r; b++)
        {
            for (int c = b + 1; c <= r; c++)
            {
                if (check(a, b, c))
                {
                    cout << a << " " << b << " " << c << endl;
                    f = 1;
                    break;
                }
            }
            if (f)
            {
                break;
            }
        }
        if (f)
        {
            break;
        }
    }
    if(!f){
        cout<<-1<<endl;
    }

    return 0;
}