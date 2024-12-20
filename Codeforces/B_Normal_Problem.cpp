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
        string s;
        cin>>s;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='p'){
                cout<<'q';
            }
            else if(s[i]=='w'){
                cout<<"w";
            }
            else{
                cout<<'p';
            }
        }
        cout<<endl;
    }

    

    return 0;
}