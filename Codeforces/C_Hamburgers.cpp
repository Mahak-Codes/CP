#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool check(int ans,int pb,int ps,int pc,int nb,int ns,int nc,int ruples,map<char,int>mp){
    int rb=max(0LL,mp['B']*ans-nb);
    int rc=max(0LL,mp['C']*ans-nc);
    int rs=max(0LL,mp['S']*ans-ns);
    int cost=rb*pb+rs*ps+rc*pc;
    if(ruples>=cost){
        return true;
    }
    return false;
}
int32_t main() {
    mahak_codes
    string s;
    cin>>s;
    int n=s.size();
    int pb,ps,pc,nb,nc,ns;
    map<char,int>mp;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    int ruples;
    cin>>ruples;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int l=0,r=2e12,ans=0;
    while(l<r){
        int mid=l+(r-l)/2;
        if(check(mid,pb,ps,pc,nb,ns,nc,ruples,mp)){
            l=mid + 1;
            ans = mid;
        }
        else{
            r=mid;
        }
    }
    cout<<ans<<endl;
    return 0;
}