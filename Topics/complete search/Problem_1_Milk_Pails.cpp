#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int a,b,c;
    cin>>a>>b>>c;
    if(c%a==0 || c%b==0){
        cout<<c<<endl;
    }
    else{
        int maxi=0;
        for(int i=0;i<=c;i++){
            if(a*i>c){
                break;
            }
            for(int j=0;j<=c;j++){
                int milk=a*i+b*j;
                if(milk>c){
                    break;
                }
                maxi=max(milk,maxi);

            }
        }
        cout<<maxi<<endl;

    }

    

    return 0;
}