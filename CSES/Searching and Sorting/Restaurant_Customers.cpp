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
    vector<int>d(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>d[i];
    }
    sort(a.begin(),a.end());
    sort(d.begin(),d.end());
    int p1=0,p2=0,curr=0,maxi=0;
    while(p1<n && p2<n){
        if(a[p1]<d[p2]){
            curr++;
            p1++;
            maxi=max(curr,maxi);
        }
        else{
            curr--;
            p2++;
            maxi=max(curr,maxi);
        }
    }
    cout<<maxi<<endl;
    return 0;
}