#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
    string s;
    cin>>s;
    int n=s.size();
    int cnt=1,maxi=1;
    char prev=s[0];
    for(int i=1;i<n;i++){
        if(s[i]==prev){
            cnt++;
        }
        else{
            cnt=1;
            prev=s[i];
        }
        maxi=max(maxi,cnt);
    }
    cout<<maxi<<endl;
    return 0 ;
}