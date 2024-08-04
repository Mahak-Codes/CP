#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool solve(vector<int>a,int sum,int i,int n,int x){
    if(i==n && sum==x){
        return true;
    }
    if(i==n){
        return false;
    }
    if(solve(a,sum+a[i],i+1,n,x)||(solve(a,sum-a[i],i+1,n,x))){
        return true;
    }
    return false;
}
int32_t main() {
    mahak_codes
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=a[0];
    if(solve(a,sum,1,n,x)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    

    return 0;
}