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
        string s;
        cin>>s;
        int a=0,b=0,c=0,d=0,q=0;
        for(int i=0;i<4*n;i++){
            if(s[i]=='A'){
                a++;
            }
            else if(s[i]=='B'){
                b++;
            }
             else if(s[i]=='C'){
                c++;
            }
             else if(s[i]=='D'){
                d++;
            }
            else{
                q++;
            }
        }
        int cnt=min(a,n)+min(b,n)+min(c,n)+min(d,n);
        cout<<cnt<<endl;
    }

    

    return 0;
}