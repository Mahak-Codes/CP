#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int p1=0,p2=0,curr=0,ans=0;
    while(p1<n && p2<n){
        if(a[p1]<=b[p2]){
            curr++;
            p1++;
        }
        else{
            curr--;
            p2++;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;

    return 0;
}