#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
    int n;
    cin>>n;
    vector<int>a(n+1,0);
    int ans=0;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        ans^=x;
        ans^=i;
    }
    ans^=n;
    cout<<ans<<endl;
    return 0 ;
}