#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    freopen("breedflip.in", "r", stdin);
	freopen("breedflip.out", "w", stdout);
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int f=0,ans=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i] ){
            if(!f){
                f=1;
                ans++;
            }
        }
        else{
            f=0;
        }
    } 
    cout<<ans<<endl;
    

    return 0;
}