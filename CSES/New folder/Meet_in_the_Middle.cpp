#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

void f(int i,vector<int>&a,int sum,vector<int>&res,int n){
    if(i==n){
        res.push_back(sum);
        return;
    }
    f(i+1,a,sum+a[i],res,n);
    f(i+1,a,sum,res,n);
}
int lb(const vector<int>& a, int x) {
    int l = 0, h = a.size();
    while (l < h) {
        int mid = l + (h - l) / 2;
        if (a[mid] < x)
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}

int ub(const vector<int>& a, int x) {
    int l = 0, h = a.size();
    while (l < h) {
        int mid = l + (h - l) / 2;
        if (a[mid] <= x)
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}
int32_t main() {
    mahak_codes
    int n,target;
    cin>>n>>target;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v1,v2;
    f(0,a,0,v1,n/2);
    f(n/2,a,0,v2,n);
    sort(v1.begin(),v1.end());
    int cnt=0;
    for(int i=0;i<v2.size();i++){
        int x=target-v2[i];
        cnt+=(ub(v1,x)-lb(v1,x));
         
    }
    cout<<cnt<<endl;
    return 0;
}