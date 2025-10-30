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
        int n,k,l,r;
        cin>>n>>k>>l>>r;
        vector<int>a(n);
        map<int,int>mp;
        set<pair<int,int>>st;
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            int x=a[i];
            if(mp.find(x)!=mp.end()){
                st.erase({mp[x],x});
            }
            mp[x]=i;
            st.insert({i,x});
            if(st.size()>k+1){
                st.erase(st.begin());
            }
            if(st.size()<k){
                continue;
            }
            int lo, hi;
            if(st.size()==k){
                lo=i-st.begin()->first+1;
                hi=i+1;

            }
            else{
                lo=i-next(st.begin())->first+1;
                hi=i-st.begin()->first;
            }
            lo=max(lo,l);
            hi=min(hi,r);
            if(lo<=hi){
                ans+=hi-lo+1;
            }

        }
        cout<<ans<<endl;
        
    }

    

    return 0;
}