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
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        sort(a.begin(),a.end(),greater<int>());
        int timer=1;
        for(int i=0;i<n;i++){
            while( i<n && timer*a[i]>c ){
                ans++;
                i++;
            }
            if(timer*a[i]<=c){
                timer*=2;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}