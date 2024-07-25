#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void print(vector<int>a,int n,int i){
       if(i<0){
        return ;
       }
       cout<<a[i]<<" ";
       print(a,n,i-2);
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n&1){
        print(a,n,n-1);
    }
    else{
        print(a,n,n-2);
    }
    return 0;
}