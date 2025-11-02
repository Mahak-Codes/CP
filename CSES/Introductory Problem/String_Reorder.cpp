#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes  ios_base::sync_with_stdio(false); cin.tie(nullptr);

bool check(map<char, int> &mp, char curr)
{
    int n=0;
    char maxi=curr;
    for(auto x:mp){
        if(x.second>mp[maxi]){
            maxi=x.first;
        }
        n+=x.second;
    }
    return (mp[maxi]<=(n+1)/2 && mp[curr]<=n/2 );
}
int32_t main()
{
    mahak_codes
    string s,ans = "";
    cin >> s;
    map<char, int> mp;
    for (auto x : s)
    {
        mp[x]++;
    }
    char ls = '0';
    for (int i = 0; i < s.size(); i++)
    {
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            if (!(mp[ch] > 0 && ls != ch))
            {
                continue;
            }
            mp[ch]--;
            if (check(mp, ch))
            {   
                ans += ch;
                ls = ch;
                break;
            }
            else{
                mp[ch]++;
            }
        }
    }

    if (ans.size() == s.size())
    {
        cout << ans << endl;
        return 0;
    }
    cout << -1 << endl;

    return 0;
}