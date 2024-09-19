#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>x(n),y(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int dx=x[i]-x[j];
            int dy=y[i]-y[j];
            maxi=max(maxi,dx*dx+dy*dy);
        }
    }
    cout<<maxi<<endl;
     return 0;
}