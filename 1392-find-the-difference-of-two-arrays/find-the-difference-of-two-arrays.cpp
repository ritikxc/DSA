class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> map1;
        unordered_map<int,int> map2;

        for(int i:nums1) map1[i]++;
        for(int i:nums2) map2[i]++;

        vector<vector<int>> ans(2);

        for(auto it:map1){
            if(map2.find(it.first)==map2.end()) ans[0].push_back(it.first);
        }
        for(auto it:map2){
            if(map1.find(it.first)==map1.end()) ans[1].push_back(it.first);
        }
        return ans;
    }
};