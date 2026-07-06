class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int>st;
        unordered_map<int,int> mp;

        for(int i:nums2){
            while(!st.empty() && i > st.top()){
                mp[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }
        while(!st.empty()){
            mp[st.top()] = -1;
            st.pop();
        }
        vector<int> ans;

        for(int i:nums1) ans.push_back(mp[i]);

        return ans;
    }
};