#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<pair<int,char>>v(n);
    for(int i=0;i<n;i++){
        char x;
        int y;
        cin>>x>>y;
        v[i]={y,x};
       
    }
    sort(v.begin(),v.end());
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<i;j++){
            cnt+=(v[j].second=='L'?1:0);
           
        }
         for(int j=i+1;j<n;j++){
            cnt+=(v[j].second=='G'?1:0);
        }
        mini=min(cnt,mini);;
    }
    cout<<mini<<endl;

    

    return 0;
}