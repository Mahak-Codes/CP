#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes  ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main()
{
    mahak_codes int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2, 0));
    vector<int> ans(n);
    int mini = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1];
        mini += v[i][0];
        maxi += v[i][1];
        ans[i]=v[i][0];
    }
    if (mini > 0 || maxi < 0)
    {
        cout << "No" << endl;
    }
    else
    {
        int curr=mini;
        cout << "Yes" << endl;
        if(curr<0){
            for(int i=0;i<n;i++){
                int a=v[i][0];
                int b=v[i][1];
                int mx=b-a;
                int cnt=min(mx,-curr);
                ans[i]+=cnt;
                curr+=cnt;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
            
        }
       
    }

    return 0;
}