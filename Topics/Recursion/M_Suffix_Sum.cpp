#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int sum(vector<int>&a,int i,int n,int m){
    if(i<n-m){
        return 0;
    }
    return a[i]+sum(a,i-1,n,m);
}
int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sum(a,n-1,n,m)<<endl;


    

    return 0;
}