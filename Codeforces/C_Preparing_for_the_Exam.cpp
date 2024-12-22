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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(n);
        set<int>q;
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            q.insert(x);
        }
        int know=0;
        string ans="";
        for(int i=0;i<m;i++){
            if(q.count(i+1)){
                know=q.size()-1;
            }
            else{
                know=q.size(); 
            }
            if(know==n-1){
                ans+='1';
            }
            else{
                ans+='0';
            }
            
        }
        cout<<ans<<endl;
    }

    

    return 0;
}