#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    priority_queue<int>pq;
    while(true){
        string s;
        cin>>s;
        if(s=="insert"){
            int x;
            cin>>x;
            pq.push(x);
        }
        else if(s=="extract"){
            cout<<pq.top()<<endl;
            pq.pop();

        }
        else if(s=="end"){
            break;
        }
    }
    

    return 0;
}