#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 1400){
            cout << "Division 4"<<endl;
        }
        else if (n < 1600){
            cout << "Division 3"<<endl;
        }
        else if (n < 1900){
            cout << "Division 2"<<endl;
        }
        else{
            cout << "Division 1"<<endl;
        }
    }

    return 0;
}