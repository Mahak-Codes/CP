#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n);  
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int p1=0,p2=0;
    int cnt=0;
    while(p1<n && p2<m){
        if(abs(a[p1]-b[p2])<=k){
            cnt++;
            p1++;
            p2++;
        }
        else if(a[p1]<b[p2]){
            p1++;
        }
        else if(a[p1]>b[p2]){
            p2++;
        }
    }
    cout<<cnt<<endl;

    return 0 ;
}