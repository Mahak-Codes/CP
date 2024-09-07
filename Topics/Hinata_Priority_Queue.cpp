#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int pr(priority_queue<int>pq){
        int cnt=3,p=1;
        while(cnt--){
            int ele=pq.top();
            p*=ele;
            pq.pop();
        }
     return p;
}
int32_t main() {
    mahak_codes
     int n;
    cin>>n;
    priority_queue<int>pq;
   
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(x);
        if(i==0 ||i==1){
           cout<<-1<<endl; 
        }
        else{
            int product=pr(pq);
            cout<<product<<endl;
        }
    }
    return 0;
}