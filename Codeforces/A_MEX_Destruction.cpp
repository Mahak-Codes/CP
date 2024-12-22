#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int zcnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
               zcnt++;
            }
        }
        int x=0,y=n-1,e=0;
        while (x< n && a[x] == 0) {
           x++;
        }
        while (y>=0 && a[y] == 0) {
           y--;
           e++;
        }
        if(zcnt==n){
            cout<<0<<endl;
        }
        else if(zcnt== x || zcnt==e ||zcnt==e+x){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }    
    }
    return 0;
}