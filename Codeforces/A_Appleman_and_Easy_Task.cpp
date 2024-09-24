#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool isvalid(int i,int j,int n){
    return i>=0 && i<n && j>=0 && j<n;
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int f=0;
    vector<vector<char>> v(n, vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int o=0,x=0;
            if(isvalid(i-1,j,n)){
                if(v[i-1][j]=='o'){
                   o++;
                }
                
            }
            if(isvalid(i,j-1,n) ){
                if(v[i][j-1]=='o'){
                   o++;
                }
                
            }
            if(isvalid(i,j+1,n)){
                if(v[i][j+1]=='o'){
                   o++;
                }
                
            }
            if(isvalid(i+1,j,n)){
                if( v[i+1][j]=='o'){
                   o++;
                }
                
            }
            if((o&1) ){
                f=1;
              cout<<"NO"<<endl;
              break;
            }
        }
        if(f){
            break;
        }
    }
    if(!f){
        cout<<"YES"<<endl;
    }
       
    
    

    return 0;
}