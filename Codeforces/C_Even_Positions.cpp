#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
 
int dis(string s){
    stack<int> st;
    int ans = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            int cnt = st.top();
            st.pop();
            ans += i - cnt;
        }
    }

    return ans;
}
int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        st.push('(');
        s[0]='(';
        for(int i=1;i<n-1;i++){
            if(s[i]=='_' &&!st.empty()&& st.top()=='('){
                s[i]=')';
                st.pop();
            }
            else if(s[i]==')'&& !st.empty()&& st.top()=='('){
                st.pop();
            }
            else if(s[i]=='('&& st.top()=='('){
                st.push(s[i]);
            }
            else if(s[i]=='_'){
                st.push('(');
                   s[i]='(';
            }
            else if(s[i]=='('){
                st.push('(');
            }
        }

        cout<<dis(s)<<endl;

    }
    return 0;
}