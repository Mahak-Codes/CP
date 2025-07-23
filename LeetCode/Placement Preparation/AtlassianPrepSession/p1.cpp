//leetcode arranging coins->n coins,have to make staircase of k rows where the ith row has exactly i coins.the last row may be incomplete.return no of complete rows.
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,k;
    cin>>n>>k;
    int cnt=1;
    while(n>=cnt){
        n-=cnt;
        if(n>=0){
            cnt++;
        }
       
    }
    cout<<max(cnt,k)<<endl;
    

    return 0;
}