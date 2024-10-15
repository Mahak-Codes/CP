#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    string s,t;
    cin>>s>>t;
    int n=t.size();
    int c=0;
    for(int i=0;i<n;i++){
        if(s[c]==t[i]){
            c++;
        }
    }
    cout<<c+1<<endl;
    

    return 0;
}