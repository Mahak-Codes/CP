#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int cnt=0,i=0,j=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    while(a[i]<b[j] && i<n && j<m){
        cnt+=abs(a[i]-b[i]);
        i++;
        j++;
    }
    cout<<cnt<<endl;
    return 0;
}