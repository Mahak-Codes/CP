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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0,ans=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                cnt++;
            }
            else{
                ans+=(cnt+1)/(k+1);
                cnt=0;
            }
        }
        ans+=(cnt+1)/(k+1);
        cout<<ans<<endl;
    }

    

    return 0;
}