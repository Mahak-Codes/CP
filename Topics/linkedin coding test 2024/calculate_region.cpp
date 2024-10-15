#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    stack<pair<int,int>>st,st2;
    st.push({height[0],1});
    int ans=1;
    for(int i=1;i<n;i++){
        if(st.empty()){
            st.push({height[i],1});
            ans+=1;
        }
        else{
            int cnt=0;
            while(!st.empty() && st.top().first<=height[i]){
                int c=st.top().second;
                st.pop();
                cnt+=c;
            }
            st.push({height[i],cnt+1});
            ans+=(cnt+1);   
        }
    }
    int ans2=0;
     for(int i=n-1;i>=0;i--){
        if(st2.empty()){
            st2.push({height[i],1});
            ans+=1;
        }
        else{
            int cnt=0;
            while(!st2.empty() && st2.top().first<=height[i]){
                int c=st2.top().second;
                st2.pop();
                cnt+=c;
            }
            st2.push({height[i],cnt+1});
            ans2+=(cnt+1);   
        }
    }
    
    cout<<ans+ans2-n<<endl;
    return 0;
}