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
    int n,m, q;
    cin >> n >> m >> q;
    vector<int> a(n), b(m);
    int s1= 0, s2 = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s1+= a[i];
    }
    
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
        s2 += b[j];
    }
   
    int sum = s1* s2;
    
    unordered_set<int> bset(b.begin(), b.end());
    for(int x=0;x<1e6;x++){

    }
    while (q--)
    {
        int x;
        cin >> x;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            int target = x + a[i] * s2 - sum;
            
            if ((a[i]-s1)!=0 && target % (a[i]-s1) == 0)
            {
                int req = target /(a[i]-s1);
                if (bset.count(req))
                {
                    f = true;
                    break;
                }
            }
        }
        if(f){
            cout<< "YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
