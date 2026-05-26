class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {

        int idx=0;

        for(int i:nums){
            if(idx < k || nums[idx-k] != i) nums[idx++]= i;
        }
        nums.resize(idx);
        return nums;
    }
};