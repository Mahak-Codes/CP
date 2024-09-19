#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int sum=0,cnt=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==-1 && sum==0){
            cnt++;
        }
        else if(a[i]==-1 && sum>0){
            sum--;
        }
        else{
            sum+=a[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}