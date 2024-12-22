#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int mex2(int a, int b) {
    set<int> s;
    s.insert(a);
    s.insert(b);
    int mex = 0;
    while (s.find(mex) != s.end()) {
        mex++;
    }
    return mex;
}
int mex3(int a, int b,int c) {
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    int mex = 0;
    while (s.find(mex) != s.end()) {
        mex++;
    }
    return mex;
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int ed=0;
        vector<int>a(n+1,-1);
        
        a[0]=0;
        for(int i=1;i<n-1;i++){
            if(i+1==y){
                a[i]=mex3(a[i-1],a[i+1],a[x-1]);
            }
            else{
                a[i]=mex2(a[i-1],a[i+1]);
            }
        }
        if(y==n){
            a[n-1]=mex3(0,a[n-2],a[x-1]);
        }
        else{
            a[n-1]=mex2(0,a[n-2]);

        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }

    

    return 0;
}