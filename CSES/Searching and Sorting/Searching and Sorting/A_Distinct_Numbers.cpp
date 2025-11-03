#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mpp[x]++;
    }
    cout<<mpp.size()<<endl;
    return 0;
}