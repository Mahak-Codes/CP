#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    string s;
    cin>>s;
    int n=s.size();
    string h="hello";
    int l=0,f=0;
    for(int i=0;i<n;i++){
        if(s[i]==h[l]){
            l++;
        }
        if(l==5){
            f=1;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(!f){
        cout<<"NO"<<endl;
    }

    

    return 0;
}