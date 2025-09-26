#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool cmp(vector<int>&a,vector<int>&b){
    return a[0]<b[0];
}
bool cmp1(vector<int>&a,vector<int>&b){
    return a[0]+a[1]>b[0]+b[1];
}
int32_t main() {
    mahak_codes
    int n,r;
    cin>>n>>r;
    int m=n;
    int rsum=0;
    vector<vector<int>>v1,v2;
    while(m--){
        int ai,bi;
        cin>>ai>>bi;
        if(bi>=0){
            v1.push_back({ai,bi});
        }
        else{
            v2.push_back({ai,bi});
        }
    }
    sort(v1.begin(),v1.end(),cmp);
    string ans="YES";
     for(int i=0;i<v1.size();i++){
        int a=v1[i][0],b=v1[i][1];
        if(a>r){
            ans="NO";
            break;
        }
        r+=b;
    }
    sort(v2.begin(),v2.end(),cmp1);
    
    for(int i=0;i<v2.size();i++){
        int a=v2[i][0],b=v2[i][1];
        int ai=max(a,-b);
        if(ai>r){
            ans="NO";
            break;
        }
        r+=b;
    } 
    cout<<ans<<endl;
    return 0;
}