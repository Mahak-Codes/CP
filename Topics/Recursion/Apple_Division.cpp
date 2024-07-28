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
    int ans=INT_MAX;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=a[i];
        ans=min(ans,abs(sum-cnt));
        sum-=a[i];
    }
    cout<<ans<<endl;
    return 0;
}