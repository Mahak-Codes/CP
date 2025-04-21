#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>degree(n);
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        degree[x-1]++;
        degree[y-1]++;
    }
    int maxi=*max_element(degree.begin(),degree.end());
    cout<<maxi+1<<endl;
    return 0;
}