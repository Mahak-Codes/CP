#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "\n"
int32_t main(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(mp[x-a[i]]){
            cout<<mp[x-a[i]]<<" "<<i+1<<endl;
            return 0;
        }
        mp[a[i]]=i+1;
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0 ;
}