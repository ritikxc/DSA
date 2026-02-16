class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int largest = INT_MIN;
        int idx;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest) {
                largest = nums[i];
                idx = i;
            }
        }
        largest = largest/2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest && i!=idx) return -1;
        }
        return idx;
    }
};