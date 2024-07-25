#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

long long max_closest_sum(long long v1, long long q1, long long v2, long long q2, long long target) {
   long long low = 0, high = q1;
    long long max_sum = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long current_sum = mid * v1;

        if (current_sum >= target) {
            high = mid - 1;
            continue;
        }

        long long remaining_target = target - current_sum;
        long long max_v2_coins = min(remaining_target / v2, q2);
        long long total_sum = current_sum + max_v2_coins * v2;

        max_sum = max(max_sum, total_sum);

        // Binary search adjustments
        if (current_sum + v1 * (mid + 1) < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return max_sum;
}

int maxAchievableSum(int v1, int q1, int v2, int q2, int target) {
    vector<int> sums1, sums2;

    // Generate all possible sums for the first type of coin
    for (int i = 0; i <= q1; ++i) {
        sums1.push_back(i * v1);
    }

    // Generate all possible sums for the second type of coin
    for (int i = 0; i <= q2; ++i) {
        sums2.push_back(i * v2);
    }

    // Sort the sums2 array
    sort(sums2.begin(), sums2.end());

    int maxAchievable = 0;

    // Iterate through all sums in sums1 and use binary search on sums2
    for (int sum1 : sums1) {
        if (sum1 < target) {
            int remaining = target - sum1;
            auto it = lower_bound(sums2.begin(), sums2.end(), remaining);
            if (it != sums2.begin()) {
                --it;
                int sum2 = *it;
                if (sum1 + sum2 < target) {
                    maxAchievable = max(maxAchievable, sum1 + sum2);
                }
            }
        }
    }

    return maxAchievable;
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        map<int,int>mp;
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>a[i];   
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[a[i]]=x;
            
        }
        map<int, int>::iterator it = mp.begin();
        int sum=(it->second)*(it->first);
        if(mp.size()==1){
            int ans=min(m,sum);
            cout<<ans<<endl;
        }
        else{
            
            map<int, int>::iterator prev = it;
            int sum1=0,sum2=0;
            for (; it != mp.end(); ++it) {
                if( (it->first)-1==prev->first){
                    sum1= ((it->second)*(it->first))+((prev->second)*(prev->first));
                    if(sum1>m){
                        sum1= max_closest_sum(it->first,it->second,prev->first,prev->second,m);
                    }
                }
                else{
                    sum1= ((it->second)*(it->first));
                    if(sum1>m){
                        int q=m/(it->first);
                        sum1=q*it->first;
                    }
                }
                sum=max(sum1,sum);
                if(sum==m){
                    break;
                }
                prev = it;
            }
            int ans=min(sum,m);
            cout<<ans<<endl;
            
        }
    }
    return 0;
}