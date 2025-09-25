#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool check(vector<int>&a,int mid){
    int i=mid,j=a.size()-1;
    int prev=INT_MIN;
    while(i<=j){
        int mini=min(a[i],a[j]);
        if(mini<prev){
            return false;
        }
        if(a[i]<=a[j]){
            prev=a[i];
            i++;
        }
        else{
            prev=a[j];
            j--;
        }
    }
    return true;
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0,h=n-1,ans=n;
        while(l<=h){
            int mid=(h-l)/2+l;
            if(check(a,mid)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}