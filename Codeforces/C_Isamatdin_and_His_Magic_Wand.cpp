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
        vector<int>a(n);
        int e=0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }

        if(e && o){
            sort(a.begin(),a.end());
        }
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<endl;
        
    }

    

    return 0;
}