/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& a) {
        vector<int> ans;
        vector<int>mp(10001,-1);
        int n=a.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<a[i]){
                st.pop();
            }
            if(st.empty()){
                mp[a[i]]=-1;
            }
            else{
                mp[a[i]]=st.top();
            }
            st.push(a[i]);
        }
        
        for(int i=0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};
// @lc code=end

