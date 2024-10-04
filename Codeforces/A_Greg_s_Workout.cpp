#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int e1=0,e2=0,e3=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i%3==0){
            e1+=x;
        }
        else if(i%3==1){
            e2+=x;
        }
        else if(i%3==2){
            e3+=x;
        }

    }
    int maxi=max({e1,e2,e3});
    if(maxi==e1){
        cout<<"chest";
    }
    else if(maxi==e2){
        cout<<"biceps";
    }
    else{
        cout<<"back";
    }
    
    

    return 0;
}