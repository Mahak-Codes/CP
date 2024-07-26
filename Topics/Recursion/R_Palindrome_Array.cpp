#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
string pal(vector<int>&a,int i,int n){
    if(i>n ||n<0||i==n){
       return "YES";
    }
    if(a[i]!=a[n]){
        return "NO";
    }
    return pal(a,i+1,n-1);
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<pal(a,0,n-1);
    return 0;
}