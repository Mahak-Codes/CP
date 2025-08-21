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
        vector<int>ans;
        int cnt=0,p=1;
        for(int y=1;y<=19;y++){
            p*=10;
            int q=p+1;
            if(n%q==0){
                cnt++;
                ans.push_back(n/q);
            }
        }
        cout<<cnt<<endl;
        if(cnt>0){
            sort(ans.begin(),ans.end());
            for(int i=0;i<cnt;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        } 
    }

    

    return 0;
}