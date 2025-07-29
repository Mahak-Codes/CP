#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    vector<int>res(1001);
    int cnt=0,i=0;
    while(cnt<1001){
        if(i%3!=0 && i%10!=3){
            cnt++;
            res[cnt]=i;
        }
        i++;
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        cout<<res[n]<<endl;
    }
    return 0;
}