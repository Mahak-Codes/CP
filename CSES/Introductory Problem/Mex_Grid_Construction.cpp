#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n,-1));
    vector<vector<int>>row(n,vector<int>(200,0));
    vector<vector<int>>col(n,vector<int>(200,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int v=0;v<=200;v++){
                if(row[i][v]==0 && col[j][v]==0){
                    a[i][j]=v;
                    row[i][v]=1;
                    col[j][v]=1;
                    break;
                }
            }
        }
    }
    for(auto x:a){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}