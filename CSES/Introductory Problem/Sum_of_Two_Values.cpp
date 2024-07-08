#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
    int n,x;
    cin>>n>>x;
    int found=0;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mp.count(x-a[i]) && !found ){
           cout<<mp[x-a[i]]<<" "<<i+1<<endl;
           found=1;
        }
        mp[a[i]]=i+1;
    }
    if(!found){
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0 ;
}