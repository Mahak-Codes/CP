#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    string ans(n, 'f');
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int l = 0, r = n - 1, f = 1,odd=1;
    if (n % 2 == 0)
    {
        for (auto x : mp)
        {
            int cnt = x.second;
            if (cnt % 2 == 0)
            {
                while (cnt > 1)
                {
                    cnt -= 2;
                    ans[l++] = x.first;
                    ans[r--] = x.first;
                }
            }
            else
            {
                f = 0;
            }
        }
        if (f)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "NO SOLUTION" << endl;
        }
    }
    else
    {
        for (auto x : mp)
        {
            int cnt = x.second;
            if (cnt % 2 == 0)
            {
                while (cnt > 1)
                {
                    cnt -= 2;
                    ans[l++] = x.first;
                    ans[r--] = x.first;
                }
            }
            else if(odd) 
            {

                while (cnt > 1)
                {
                    cnt -= 2;
                    ans[l++] = x.first;
                    ans[r--] = x.first;
                }
                ans[n/2]=x.first;
                odd = 0;
            }
            else{
                f=0;
            }
        }
        if (f)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "NO SOLUTION" << endl;
        }
    }
    return 0;
}