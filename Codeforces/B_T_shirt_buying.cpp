#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    vector<set<int>>mp(3);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp[a-1].insert(p[i]);
    }
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        mp[b-1].insert(p[i]);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int demand;
        cin>>demand;
        demand--;
        if(mp[demand].empty()){
            cout<<-1<<endl;
        }
        else{
            int cost=*mp[demand].begin();
            cout<<cost<<" ";
            for(int j=0;j<=2;j++){
                auto it=mp[j].find(cost);
                if(it!=mp[j].end()){
                    mp[j].erase(cost);
                }

            }
        }
        
    }

    return 0 ;
}