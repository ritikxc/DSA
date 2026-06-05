class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int count0 = 0;
        int ans = 0;

        for(int right = 0;right<nums.size();right++){
            if(nums[right]==0){
                count0++;

                while(count0>1){
                    if(nums[left]==0) count0--;

                    left++;
                }
            }
            ans = max(ans,right-left);
        }
        return ans;
    }
};