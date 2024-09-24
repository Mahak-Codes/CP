#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool isrow(vector<vector<char>>&v, int r,int m){
    for(int i=0;i<m;i++){
        if(v[r][i]=='S')
            return false;
    }
    return true;
}
bool iscol(vector<vector<char>>&v, int c,int n){
    for(int i=0;i<n;i++){
        if(v[i][c]=='S')
            return false;
    }
    return true;
}
int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int rcnt=0,ccnt=0;
    for(int i=0;i<n;i++){
        if(isrow(v,i,m)){
            rcnt++;
        }
    }
    rcnt*=m;
    for(int i=0;i<m;i++){
        if(iscol(v,i,n)){
            ccnt++;
        }
    }
    rcnt-=ccnt;
    ccnt*=n;
    int ans=rcnt+ccnt;
    cout<<ans<<endl; 
    return 0;
}