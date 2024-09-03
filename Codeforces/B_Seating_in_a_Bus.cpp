#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool check(vector<int>a,int n){
    map<int,int>mp;
    mp[a[0]]++;
    for(int i=1;i<n;i++){
         mp[a[i]]++;
        if((mp[a[i]-1] >=1)||(mp[a[i]+1]>=1)){
            continue;
        }
        else{
            
            return false;
        }
      

    }
    return true;
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(check(a,n)){
            cout<<"YES"<<endl;;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    

    return 0;
}