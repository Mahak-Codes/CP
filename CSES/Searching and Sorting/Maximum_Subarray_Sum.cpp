#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi<<endl;

    return 0 ;
}