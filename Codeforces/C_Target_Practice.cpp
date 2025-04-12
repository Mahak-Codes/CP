#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int get(int i,int j,int n){
    if(i==0 ||j==0||i==n-1||j==n-1){
        return 1;
    }
    if(i==1 ||j==1||i==n-2||j==n-2){
        return 2;
    }
    if(i==2 ||j==2||i==n-3||j==n-3){
        return 3;
    }
    if(i==3 ||j==3||i==n-4||j==n-4){
        return 4;
    }
    if(i==4 ||j==4||i==n-5||j==n-5){
        return 5;
    }

}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n=10;
        vector<string>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++ ){
                if(v[i][j]=='X'){
                    ans+=get(i,j,n);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}