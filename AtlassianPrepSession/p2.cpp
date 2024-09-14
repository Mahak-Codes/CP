/*given string s of lowercase letter and cipher strategy.the cipher strategy assign 
each letter in alphabet a corresponding no.from 1 to 26. And * is  used to modify the
 value assigned to letter. * adds x value to alphabet.given string give final string 
after encryption*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    string s;
    int x;
    cin>>s>>x;
    string ans;
    for(int i=0;i<s.size();i++){
        int val=(s[i]-'a')+1;
        if(i<s.size()-1 && s[i+1]=='*'){
            val+=x;
        }
        if(s[i]=='*'){
            continue;
        }
        string value=to_string(val);
        ans+=value;

    }
    cout<<ans<<endl;
    return 0;
}