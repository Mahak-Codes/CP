#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void print(int n){
    if(n==1){
        return ;
    }
    if(n%2==0){
        cout<<n/2<<" ";
        print(n/2);
    }
    else{
        cout<<n*3+1<<" ";
        print(n*3+1);
    }
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    cout<<n<<" ";
    print(n);

    

    return 0;
}