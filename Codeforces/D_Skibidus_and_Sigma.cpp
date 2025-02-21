#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool cmp(const pair<int,int> &a, const pair<int,int> &b){
   return a.first > b.first;
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<pair<int,int>> v(n); 
        for (int i = 0; i < n; i++){
            int cnt = 0, psum = 0;
            for (int j = 0; j < m; j++){
                int x;
                cin >> x;
                psum += x;  
                cnt += psum;   
            }
            v[i] = {psum, cnt};
        }
        sort(v.begin(), v.end(),cmp);
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i++){
            ans += v[i].second + m * sum;
            sum += v[i].first;
        }
        cout << ans << "\n";
    }
    return 0;
}
