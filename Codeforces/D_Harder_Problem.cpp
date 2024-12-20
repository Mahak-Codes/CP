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
        int c1=0;
        vector<int> a(n),b(n);
        vector<int>c;
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
                c.push_back(i);
            }
        }
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            if(mp.find(a[i])==mp.end()){
                b[i] = a[i]; 
            }
            else{
                b[i]=c[c1++];
            }
            mp[a[i]] ++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}