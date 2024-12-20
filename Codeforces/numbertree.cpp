#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int len=s.size();
    int l=-1,r=-2;
    int val=(1<<(n+1))-1;
    int sum=0;
    int ld=0;
    if(s[0]=='L'){
        sum=1;
        ld=1;
    }
    else if(s[0]=='R'){
        sum=2;
        ld=2;
    }
    for(int i=1;i<len;i++){
        if(s[i-1]=='L' && s[i]=='L'){
           sum+=(2*ld);
           ld=2*ld;
        } 
        else if(s[i-1]=='R' && s[i]=='R'){
           sum+=(2*ld);
           ld=2*ld;
        } 
        else if(s[i-1]=='L' && s[i]=='R'){
           sum+=(2*ld)+1;
           ld=2*ld+1;
        } 
         else if(s[i-1]=='R' && s[i]=='L'){
           sum+=(2*ld)-1;
           ld=2*ld -1;
        } 
    }
    cout<<val-sum<<endl;
    
    

    

    return 0;
}