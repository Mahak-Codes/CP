#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    char prev='@';
    int cnt=0;
    while(n--){
        string m;
        cin>>m;
        if(prev==m[0]){
            cnt++;
        }
        prev=m[1];
    }
    cout<<cnt+1<<endl;
    return 0;
}