#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void print(int i,int n){
    if(i==n+1){
        return;
    }
    int spc=i-1;
    while(spc--){
        cout<<" ";
    }
    int star=(2*(n-i+1))-1;
    while(star--){
        cout<<"*";
    }
    cout<<endl;
    print(i+1,n);
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    print(1,n);
    return 0;
}