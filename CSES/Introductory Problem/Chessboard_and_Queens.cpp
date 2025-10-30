#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool check(int r,int c,vector<string>&a){
    for(int i=0;i<8;i++){
        if(a[r][i]=='Q'){
            return false;
        }
        if(a[i][c]=='Q'){
            return false;
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i-j==r-c && a[i][j]=='Q'){
                return false;
            }
            if(i+j==r+c && a[i][j]=='Q'){
                return false;
            }
        }
    }
    if(a[r][c]=='*'){
        return false;
    }
    return true;
}
void solve(int i,vector<string>&a ,int &ans){
    if(i==8){
        ans++;
        return ;
    }
    for(int j=0;j<8;j++){
        if(check(i,j,a)){
            a[i][j]='Q';
            solve(i+1,a,ans);
            a[i][j]='.';
            
        }
    }
    return ;
}
int32_t main() {
    mahak_codes
    vector<string>a(8);
    for(int i=0;i<8;i++){
        cin>>a[i];  
    }
    int ans=0;
    solve(0,a,ans);
    cout<<ans;

    return 0;
}