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
        k--;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int pos=a[k];
        sort(a.begin(),a.end());
        for(int i=n-1;i>=0;i--){
            if(pos==a[i]){
                pos=i;
                break;
            }
        }
        string ans="NO";
        int i=pos,ti=0;
        for(i=pos;i<n-1;i++){
            int hi=a[i];
            int hj=a[i+1];
            if(2*hi- hj>=ti){
             ti+=(hj-hi);
            }
            else{
                break;
            }
        }
        if(i==n-1){
            ans="YES";
        }
        cout<<ans<<endl;

    }

    

    return 0;
}