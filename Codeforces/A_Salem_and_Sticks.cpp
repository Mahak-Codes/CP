#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=INT_MAX,min_t=-1;

    for(int t=1;t<=1000;t++){
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(t<a[i]){
                cnt+=a[i]-(t+1);
            }
            else if(t>a[i]){
                cnt+=t-1-a[i];

            }
          
        } 
        if(ans>cnt){
            min_t=t;
            ans=cnt;
        }
        
    }
    cout<<min_t<<" "<<ans<<endl;                

    

    return 0;
}