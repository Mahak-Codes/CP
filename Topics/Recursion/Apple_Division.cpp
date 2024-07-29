#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
int solve(vector<int>a,int i,int sum1,int sum2){
    if(i==a.size()){
        return abs(sum1-sum2);
    }
    int sl=solve(a,i+1,sum1+a[i],sum2);
    int nsl=solve(a,i+1,sum1,sum2+a[i]);
    return min(sl,nsl);
}
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
        
    }
    cout<<solve(a,0,0,0)<<endl;;
    
}