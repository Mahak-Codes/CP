#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes 
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp[x-a[i]]>0){
            cout<<mp[x-a[i]]<<" "<<i+1<<endl;
            return 0;
        }
        mp[a[i]]=i+1;
    }
    cout<<-1<<endl;
    return 0;
}