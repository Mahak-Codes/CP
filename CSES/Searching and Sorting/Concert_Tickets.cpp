#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> h;
    vector<int> t(m);
    for (int i = 0; i < n; i++)
    {
        int hi;
        cin >> hi;
        h.insert(hi);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t[i];
    }
    for (int i = 0; i < m; i++)
    {
        int pay=t[i];
        auto it=h.lower_bound(pay);
        if(*it==pay){
            cout<<*it<<endl;
            h.erase(it);
        }
        else if(it!=h.begin()) {
            cout<<*(--it)<<endl;
            h.erase(it);
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}