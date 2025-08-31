#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void solve(int i,string s,set<string>&ans){
    if(i==s.size()){
        ans.insert(s);
    }
    for(int j=i;j<s.size();j++){
        swap(s[i],s[j]);
        solve(i+1,s,ans);
        swap(s[i],s[j]);
    }
}
int32_t main() {
    mahak_codes
    string s;
    cin>>s;
    int n=s.size();
    set<string>ans;
    solve(0,s,ans);
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<endl;
    }
    return 0;
}