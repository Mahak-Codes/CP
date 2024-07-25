#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int cntinv(const string& s) {
    int ocnt = 0;  
    int ans = 0; 
    for (char x : s) {
        if (x == '1') {
            ocnt++;
        } else if (x == '0') {
            ans += ocnt;
        }
    }
    return ans;
}
int cntinv2(string st,int x,int y){
    string s=st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' && x){
            s[i]='0';
            x--;
        }
    }
    for(int i=s.size()-1;i>0;i--){
        if(s[i]=='0' && y){
            s[i]='1';
            y--;
        }
    }
    int cnt=cntinv(s);
    return cnt;

}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int mini=INT_MAX;
        for(int i=0;i<=k;i++){
            int j=k-i;
            mini=min(mini,cntinv2(s,i,j));
        }
        cout<<mini<<endl;
        
    }
    return 0;
}
