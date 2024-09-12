#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
   
        int a,b,c,d,k,ans;
        cin>>a>>b>>c>>d>>k;
        if(a<=c && d<=b){
         
            ans=d-c+1;
            if(k>=c && k<=d){
                ans--;
            }
        }
        else if(c<=a && a<=d && d<=b){
            
            ans=d-a+1;
            if(k>=a&& k<=d){
                ans--;
            }
        }
        else if(c<=a && a<=d && b<=d){
             
            ans=b-a+1;
            if(k>=a&& k<=b){
                ans--;
            }
        }
        else if(a<=c && c<=b && b<=d){
            ans=b-c+1;
            if(k>=c&& k<=b){
                ans--;
            }
        }
        else if(b<c){
           
            ans=0;
        }
        else if(d<a){
            ans=0;
        }
        
        else{
            ans=0;
        }
        cout<<ans<<endl;

    

    return 0;
}