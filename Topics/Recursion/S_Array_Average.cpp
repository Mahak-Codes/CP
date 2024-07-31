#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
double avg(vector<int>& a, int i, int n, double sum) {
    if(n==0){
        return 0.0;
    }
    if (i >= n ) {
        return sum / static_cast<double>(n);
    }
    sum += a[i];
    return avg(a, i + 1, n, sum);
}

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n);
    double sum=0.0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sum=avg(a,0,n,0);   
    cout << fixed << setprecision(6) << sum << endl;

    return 0;
}