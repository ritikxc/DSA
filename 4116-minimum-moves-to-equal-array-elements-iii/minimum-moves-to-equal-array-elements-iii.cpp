class Solution {
public:
    int minMoves(vector<int>& nums) {

        int maxi = INT_MIN;
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi) maxi = nums[i];
        }
        for(int i=0;i<nums.size();i++){
            count += maxi-nums[i];
        }
        return count;
    }
};