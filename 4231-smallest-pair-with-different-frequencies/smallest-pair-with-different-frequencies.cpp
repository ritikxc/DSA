class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {

        unordered_map<int,int> freq;
        int x = INT_MAX;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(nums[i]<x) x = nums[i];
        }
        int y = INT_MAX;

        for(auto it:freq){
            if(it.first != x && it.second != freq[x]){
                y = min(y, it.first);
            }
        }
       if(y!=INT_MAX) return {x,y};

        return {-1,-1};
    }
};