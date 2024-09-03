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
        string s;
        cin >> s;
        int x = sqrt(n);
        if (x * x != n)
        {
            cout << "No" << endl;
        }
        else
        {
            int f=0;
            for (int i = 0; i < x; ++i)
            {
                for (int j = 0; j < x; ++j)
                {
                    int in= i * x + j;
                    if (i == 0 || i == x - 1 || j == 0 || j == x - 1)
                    {
                        if (s[in] != '1')
                        {
                            f=1;
                            cout<<"No"<<endl;
                            break;
                        }
                    }
                    else
                    {
                        
                        if (s[in] != '0')
                        {
                            f=1;
                            cout<<"No"<<endl;
                            break;
                        }
                    }
                }
                if(f){
                    break;
                }
            }
            if(!f){
                cout<<"Yes"<<endl;
            }
        }
    }

    return 0;
}