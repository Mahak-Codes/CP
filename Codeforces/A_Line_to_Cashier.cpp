#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int mini=INT_MAX;
    vector<int>k(n);
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<k[i];j++){
            int it;
            cin>>it;
            sum+=(it*5)+15;
        }
        mini=min(sum,mini);
    }
    cout<<mini<<endl;
    return 0;
}