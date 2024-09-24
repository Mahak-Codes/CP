#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int c1=0,c2=0,c3=0;
    vector<int>v1,v2,v3;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            c1++;
            v1.push_back(i+1);
        }
        else if(x==2){
            c2++;
            v2.push_back(i+1);
        }
        else{
            c3++;
            v3.push_back(i+1);
        }
    }
    int nm=min({c1,c2,c3});
    cout<<nm<<endl;
    for(int i=0;i<nm;i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }

    

    

    return 0;
}