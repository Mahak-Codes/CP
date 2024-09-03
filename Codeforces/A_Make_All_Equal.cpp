#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n, maxi = 0;
        cin>>n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
           int x;
           cin>>x;
           mp[x]++;
           maxi = max(maxi, mp[x]);
        }
        cout<<n-maxi<<endl;
    }
    

    return 0;
}