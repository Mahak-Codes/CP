#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int ans=1;
    for(int i=0;i<n;i++){
        if(a[i]>ans){
            break;
        }
        else{
            ans+=a[i];
        }
    }
    cout << ans << endl;
    return 0;
}