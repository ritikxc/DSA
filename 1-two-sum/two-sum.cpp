class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> ind;

        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];

            if(ind.find(complement)!=ind.end()){
                return {ind[complement], i};
            }
        ind[nums[i]] = i;
        }

        return {};

        
    }
};