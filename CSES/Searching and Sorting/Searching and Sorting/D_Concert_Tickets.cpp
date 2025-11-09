#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    multiset<int> h;
    vector<int>b(m);
    for(int i=0;i<n;i++){
        int ai;
        cin>>ai;
        h.insert(ai);
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        int ti=b[i];
        auto it=h.lower_bound(ti);
        if(ti==*it){
            cout<<*it<<endl;
            h.erase(it);
        }
        else if(it!=h.begin()){
            cout<<*(--it)<<endl;
            h.erase(it);
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}