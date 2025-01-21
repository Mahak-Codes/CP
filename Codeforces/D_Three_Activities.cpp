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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = {x, i};
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[i] = {x, i};
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            c[i] = {x, i};
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
        int maxi=INT_MIN;
        int ans=INT_MIN;
        for (int i = 0; i < 3; i++){ 
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    int d1=a[i].second,d2=b[j].second,d3=c[k].second;
                    ans=a[i].first+b[j].first+c[k].first;
                    if(d1!=d2 && d2!=d3 && d3!=d1){
                        maxi=max(ans,maxi);
                    }
                }
            }
               
        }
        cout<<maxi<<endl;;
    }

    return 0;
}



