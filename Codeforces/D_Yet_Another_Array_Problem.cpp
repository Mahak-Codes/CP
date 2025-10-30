#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
vector<int> sieve(int n) {
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    
    vector<int> res;
    for (int p = 2; p <= n; p++){
        if (prime[p]){ 
            res.push_back(p);
        }
    }
    return res;
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    vector<int>prime=sieve(200000);
    while(t--){
        int ans=-1;
        int n;
        cin>>n;
        vector<int>a(n);
        int o=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(o){
            cout<<2<<endl;
        }
        else{
           for(auto p:prime){
              bool f=0;
              for(auto x:a){
                if(x%p!=0){
                    ans=p;
                    f=1;
                    break;
                
                }
              }
              if(f){
                break;
              }
           }
        }
        cout<<ans<<endl;
    }

    

    return 0;
}