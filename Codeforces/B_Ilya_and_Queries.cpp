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
    vector<int>a(n,0);
    for(int i=0;i<n-1;i++){
         if(s[i]==s[i+1]){
            a[i]=1;
         }
         else{
            a[i]=0;
         }
    }
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
    }
    int t;
    cin >> t;
    while(t--){
        int l,r,ans;
        cin>>l>>r;
        if(l<2){
            ans=a[r-2];

        }
        else{
            ans=a[r-2]-a[l-2];
        }   
        cout<<ans<<endl;
    }
    return 0;
}