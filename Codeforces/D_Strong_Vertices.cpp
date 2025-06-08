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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int maxi=INT_MIN,cnt=0;
        for(int i=0;i<n;i++){
            int x=a[i]-b[i];
            maxi=max(maxi,x);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            int x=a[i]-b[i];
            if(maxi==x){
                cnt++;
                ans.push_back(i+1);
            }
        }
        cout<<cnt<<endl;
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
       

    }
    return 0;
}