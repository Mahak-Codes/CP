#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int val=a[k-1];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]>=val && a[i]!=0){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}