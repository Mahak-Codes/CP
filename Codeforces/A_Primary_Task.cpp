#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int di(int n){
    int cnt=0;
    while(n){
        n/=10;
        cnt++;
    }
    return cnt;
}
int32_t main() {
   
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()>2 && s[0]=='1' && s[1]=='0'){
            string check(s.begin()+2,s.end());
            int n=stoi(check);
            
            if(n>=2 && di(n)==check.size()){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    

    return 0;
}