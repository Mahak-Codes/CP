#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int dx[]={-2,-2,-1,-1,1,1,2,2};
    int dy[]={1,-1,2,-2,2,-2,1,-1};
    vector<vector<int>>dis(n,vector<int>(n,-1));
    dis[0][0]=0;
    queue<pair<int,int>>q;
    q.push({0,0});
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<8;i++){
            int nr=x+dx[i];
            int nc=y+dy[i];
            if(nr>=0 && nr<n && nc>=0 && nc<n && dis[nr][nc]==-1){
                dis[nr][nc]=1+dis[x][y];
                q.push({nr,nc});
            }
        }
    }
    for(auto x:dis){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}