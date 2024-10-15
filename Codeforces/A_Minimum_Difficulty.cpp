#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n);
    int mini=INT_MAX,maxi=INT_MIN;
    int in=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=2;i<n;i++){
        int d=a[i]-a[i-2];
        if(mini>d){
            mini=d;
            in=i-1;
        }
    }
  
    for(int i=1;i<n;i++){
        int d=a[i]-a[i-1];
        if(i==in ){
            d=a[i+1]-a[i-1];
            maxi=max(d,maxi);
            i++;
            continue;
        }
        maxi=max(d,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}