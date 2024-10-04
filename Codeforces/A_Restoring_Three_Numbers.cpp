#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int x,y,z,s;
    cin>>x>>y>>z>>s;
    int sum=x+y+z+s;
    sum/=3;
    if(x==sum){
        cout<<sum-y<<" "<<sum-z<<" "<<sum-s<<endl;
    }
    else if(y==sum){
        cout<<sum-x<<" "<<sum-z<<" "<<sum-s<<endl;
    }
    else if(z==sum){
        cout<<sum-y<<" "<<sum-x<<" "<<sum-s<<endl;
    }
    else{ 
        cout<<sum-y<<" "<<sum-z<<" "<<sum-x<<endl;
    
    }

    

    return 0;
}