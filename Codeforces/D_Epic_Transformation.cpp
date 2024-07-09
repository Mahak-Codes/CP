/*Solution 1 -STL  
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        priority_queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto x:mp){
            q.push({x.second,x.first});
        }
        int cnt=n;
        while(q.size()>1){
           pair<int,int> min1=q.top();
           q.pop();
           pair<int,int> min2=q.top();
           q.pop();
           min1.first--;
           min2.first--;
           cnt-=2;
           if(min1.first>0){
            q.push(min1);
           }
           if(min2.first>0){
            q.push(min2);
           }

        }
        if(!q.empty()){
            cout<<q.top().first<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}
*/
// Solution2 
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            maxi = max(maxi, mp[x]);
        }
        if (maxi > n / 2)
        {
            cout << 2 * maxi - n << endl;
        }
        else
        {
            cout << n % 2 << endl;
        }
    }

    return 0;
}