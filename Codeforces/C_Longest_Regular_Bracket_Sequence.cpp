#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes
        string s;
    cin >> s;
    int n = s.size();
    int maxi = 0, cnt = 0, f = 0;
    vector<int> v(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        if (!st.empty() && s[i] == ')')
        {
            int in = st.top();
            st.pop();
            v[i] = 1;
            v[in] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cnt++;
            maxi = max(cnt, maxi);
        }
        else
        {
            maxi = max(cnt, maxi);
            cnt = 0;
        }
    }
    cnt = 0, f = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cnt++;
            if (cnt == maxi)
            {
                f++;
            }
        }
        else
        {
            cnt = 0;
        }
    }
    if (f == 0)
    {
        cout << 0 << " " << 1 << endl;
    }
    else
    {
        cout << maxi << " " << f << endl;
    }
}