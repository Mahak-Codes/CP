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
        int n, m;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO" << endl;
            }
            else
            {
                int f = 0;
                map<char, int> mp;
                for (int i = 0; i < n; i++)
                {
                    if (mp.find(s[i]) != mp.end())
                    {
                        int x = mp[s[i]];
                        if (a[i] != x)
                        {
                            f = 1;
                            cout << "NO" << endl;
                            break;
                        }
                    }
                    else
                    {
                        mp[s[i]] = a[i];
                    }
                }
                if (!f)
                {
                    int si=mp.size();
                    set<int>u;
                    for(auto x:mp){
                        u.insert(x.second);

                    }
                    if(u.size()==si){
                        cout << "YES" << endl;

                    }
                    else{
                        cout << "NO" << endl;
                    }
                    
                }
            }
        }
    }

    return 0;
}