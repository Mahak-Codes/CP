/*
 * @lc app=leetcode id=503 lang=cpp
 *
 * [503] Next Greater Element II
 */

// @lc code=start


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        int n=a.size();
        vector<int>ans(n,-1);
        stack<int>s;
        for(int i=2*n-1;i>=0;i--){
            while(!s.empty() && s.top()<=a[i%n]){
                s.pop();
            }
            if(i<n){
                if(s.empty()){
                    ans[i]=-1;
                }
                else{
                    ans[i]=s.top();
                }
            }
            s.push(a[i%n]);
        }
        return ans;

    }
};

// @lc code=end

