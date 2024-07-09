#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>d(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>d[i];
    }
    sort(a.begin(),a.end());
    sort(d.begin(),d.end());
    int p1=0,p2=0;
    int curr=0,maxyear=-1,maxi=INT_MIN;
    while(p1<n && p2<n){
        if(a[p1]==d[p2]){
            curr--;
            curr++;
            if(maxi<curr){
                maxyear=a[p1];
                maxi=max(curr,maxi);
            }   
            p1++;
            p2++;
        }
        else if(a[p1]<d[p2]){
            curr++;
            if(maxi<curr){
                maxyear=a[p1];
                maxi=max(curr,maxi);
            }   
            p1++;
        }
        else{
            curr--;
            if(maxi<curr){
                maxyear=d[p2];
                maxi=max(curr,maxi);
            } 
            p2++;
        }
        
    }
    cout<<maxyear<<" "<<maxi<<endl;


    return 0;
}