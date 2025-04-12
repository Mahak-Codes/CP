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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int bcnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                bcnt++;
            }
        }
        int i=0;
        int ans=0;
        while(i<n){
            if(s[i]=='W'){
                i++;
            }
            else{
                break;
            }
        }
        if(i==n){
            cout<<ans<<endl;
        }
        else{
            while(i<n && bcnt>0){
                int si=0;
                while(si<k && i<n){
                    if(s[i]=='B'){
                        bcnt--;
                    }
                    si++;
                    i++;
                }
                while(s[i]=='W'){
                    i++;
                }
                ans++;
                
            }
            cout<<ans<<endl;

        }
      
    }

    

    return 0;
}