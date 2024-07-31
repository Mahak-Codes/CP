#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void sum(int i,int j,vector<vector<int>>&a,vector<vector<int>>&b,vector<vector<int>>&res,int r,int c){
    if(i==r){
        return;
    }
    res[i][j]=a[i][j]+b[i][j];
    if(j==c-1){
        i++;
        j=-1;
    }
    sum(i,++j,a,b,res,r,c);
}
int32_t main() {
    mahak_codes
    int r,c;
    cin>>r>>c;
    vector<vector<int>>a(r,vector<int>(c,0)),b(r,vector<int>(c,0)),res(r,vector<int>(c,0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    sum(0,0,a,b,res,r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}