#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    map<int,int>left;
    map<int,int>right;
    left[0]=0,right[0]=0,left[1]=0,right[1]=0;
    while(n--){
        int l,r;
        cin>>l>>r;
        left[l]++;
        right[r]++;
    }
    int ans=0;
    if(left[0]<=left[1]){
        ans+=left[0];
    }
    else{
        ans+=left[1];
    }
    if(right[0]<=right[1]){
        ans+=right[0];
    }
    else{
        ans+=right[1];
    }
   cout<<ans<<endl;
    

    return 0;
}