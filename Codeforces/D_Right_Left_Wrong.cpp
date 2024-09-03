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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            a[i]+=a[i-1];
        }
        string s;
        cin>>s;
        int sum=0;
        int l=0,r=n-1;
        while(l<r){
            if(s[l]=='L' && s[r]=='R'){
                if(l==0){
                    sum+=a[r];
                }
                else{
                    sum+=a[r]-a[l-1];

                }
                l++;
                r--;
            }
            else if(s[l]=='R'){
                l++;
            }
            else if(s[r]=='L'){
                r--;
            }
        }
        cout<<sum<<endl;

    }

    

    return 0;
}