#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int p1=0,p2=0,ans=0;
    while(p1<n && p2<m){
        if(abs(a[p1]-b[p2])<=k){
            p2++;
            p1++;
            ans++;
        }
        else if(a[p1]>b[p2]){
            p2++;
        }
        else{
            p1++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}