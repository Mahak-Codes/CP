#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void f(vector<int>a,vector<vector<int>>ans,int target,int sum,int i,vector<int>temp){
    if(sum==target){
        ans.push_back(temp);
        return;
    }
    if((i==a.size())||(sum>target)){
        return;
    }
    temp.push_back(a[i]);
    f(a,ans,target,sum+a[i],i,temp);
    temp.pop_back();
    f(a,ans,target,sum,i+1,temp);
}
int32_t main() {
    mahak_codes
    int n,target;
    cin>>n>>target;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>temp;
    vector<vector<int>>ans;
    f(a,ans,target,0,0,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();i++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}