#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int sum=0,maxi=0;
    vector<int>a(n,0);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            cnt++;
        }
        sum+=a[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    if(cnt==n){
        maxi=*max_element(a.begin(),a.end());
    }
    cout<<maxi<<endl;

    return 0;
}