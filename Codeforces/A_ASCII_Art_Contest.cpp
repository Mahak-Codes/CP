#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    vector<int>a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    if(abs(a[0]-a[2])>=10){
        cout<<"check again"<<endl;
    }
    else{
        cout<<"final"<<" "<<a[1]<<endl;
    }
    return 0;
}