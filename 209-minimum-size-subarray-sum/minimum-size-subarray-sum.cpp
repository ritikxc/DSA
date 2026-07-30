class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int mini = INT_MAX;

        int left = 0;
        int right = 0;
        int curr = 0;

        while(right<nums.size()){
            
            curr += nums[right];
            while(curr >= target){
                mini = min(mini, right-left+1);
                curr-=nums[left];
                left++;
            }
            right++;
        }
        if(mini == INT_MAX) return 0;

        return mini;
    }
};