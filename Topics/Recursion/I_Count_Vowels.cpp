#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int cnt(string s,int i,int n){
    if(i==n){
        return 0;
    }
    if(s[i]=='a' ||s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u'||s[i]=='A' ||s[i]=='E'||s[i]=='I' ||s[i]=='O'||s[i]=='U'){
        return 1+ cnt(s,i+1,n);
    }
    return cnt(s,i+1,n);
    
}
int32_t main() {
    mahak_codes
    string s;
    getline(cin,s);
    int n=s.size();
    cout<<cnt(s,0,n)<<endl;

    return 0;
}