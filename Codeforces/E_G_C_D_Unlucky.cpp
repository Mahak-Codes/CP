#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; 
}

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n),s(n);
        vector<int>l(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            cin>>s[i];
            l[i]=lcm(s[i],p[i]);
        }
        string ans="YES";
        int prev=l[0];
        for(int i=0;i<n;i++){
            if(gcd(l[i],prev)!=p[i]){
                ans="NO";
                break;
            }
            prev=gcd(l[i],prev);
        }
        prev=l[n-1];
        for(int i=n-1;i>=0;i--){
            if(gcd(l[i],prev)!=s[i]){
                ans="NO";
                break;
            }
            prev=gcd(l[i],prev);
        }
        cout<<ans<<endl;
    }
    return 0;
}