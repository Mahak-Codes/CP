#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int a,b;
    cin>>a>>b;
    int awin=0,bwin=0,draw=0;
    for(int i=1;i<=6;i++){
        int da=abs(i-a);
        int db=abs(i-b);
        if(da<db){
            awin++;
        }
        else if(da>db){
            bwin++;
        }
        else{
            draw++;
        }
    }
    cout<<awin<<" "<<draw<<" "<<bwin<<endl;
    return 0;
}