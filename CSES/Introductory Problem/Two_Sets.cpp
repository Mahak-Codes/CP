#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int32_t main(){
    int n;
    cin>>n;
    int tsum=(n)*(n+1)/2;
    if(tsum&1){
        cout<<"NO"<<endl;
    }
    else{
        int sum=tsum/2;
        set<int>s1;
        set<int>s2;
        for(int i=1;i<=n;i++){
            if(sum>0){
                sum-=i;
                s1.insert(i);
                if(sum<0){
                    s1.erase(-sum);
                    s2.insert(-sum);
                    sum=0;
                }
            }
            else if(sum==0){
                s2.insert(i);
            }
        }
        cout<<"YES";
        cout<<endl<<s1.size()<<endl;
        for(auto x:s1){
            cout<<x<<" ";
        }
        cout<<endl<<s2.size()<<endl;
        for(auto x:s2){
            cout<<x<<" ";
        }
    }
    return 0 ;
}