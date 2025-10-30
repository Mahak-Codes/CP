#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool check(vector<string>&res, vector<string>&v){
    int n = v.size(), m = v[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(res[i][j] == v[i][j]) return false;  
            if(i && res[i][j] == res[i-1][j]) return false;
            if(j && res[i][j] == res[i][j-1]) return false;
        }
    }
    return true;
}
int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==0){
                if(v[i][j]=='A'){
                    v[i][j]='B';
                }
                else{
                    v[i][j]='A';
                }
            }
            else{
                if(v[i][j]=='C'){
                    v[i][j]='D';
                }
                else{
                    v[i][j]='C';
                }
            }
        }
    }
    for(auto x:v){
        cout<<x<<endl;
    }
    return 0;
}