#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first>p2.first){
        return false;
    }
    else if(p1.first==p2.first){
        return p1.second>p2.first;
    }
    return true;
}
int32_t main() {
    mahak_codes
    int s,n;
    cin>>s>>n;
    int f=0;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        if(s<=v[i].first){
            cout<<"NO"<<endl;
            f=1;
            break;
        }
        if(s>v[i].first){
            s+=v[i].second;
        }
       
    }
    if(!f){
        cout<<"YES"<<endl;
    }
    

    return 0;
}