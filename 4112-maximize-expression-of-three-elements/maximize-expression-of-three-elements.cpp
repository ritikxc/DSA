class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {

        int max1= INT_MIN;
        int max2= INT_MIN;
        int mini= INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=max1){
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i]>max2 && nums[i]<max1) max2 = nums[i];

            if(nums[i] < mini) mini = nums[i];
        }
        if(max2 == INT_MIN) return -1;
        return max1+max2-mini;
    }
};