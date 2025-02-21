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
        int n, m, b;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> b;
        int ans=0;
        pair<int,int>prev={a[0],b-a[0]};        
        for (int i = 1; i <n; i++)
        {
            pair<int,int>curr={INT_MAX,INT_MAX};
            int ch1=a[i];
            int ch2=b-a[i];
            if(ch1>=prev.first || ch1>=prev.second){
                curr.first=ch1;
            }
            if(ch2>=prev.first || ch2>=prev.second){
                curr.second=ch2;
            }
            pair<int,int>invl={INT_MAX,INT_MAX};
            if(curr==invl){
                ans=1;
                cout<<"NO"<<endl;
                break;
            }
            prev=curr;     
        }
        if (!ans)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}