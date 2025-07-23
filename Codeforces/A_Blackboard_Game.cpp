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
        vector<int>cnt(4,0);
        for(int i=0;i<n;i++){
            cnt[i%4]++;
        }
        if(cnt[0]==cnt[3] && cnt[1]==cnt[2]){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }

    return 0;
}