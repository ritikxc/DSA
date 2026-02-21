class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         int count=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                int temp = (nums[i]-nums[i+1])+1;
                count += temp;
                nums[i+1] += temp;
            }
        }
        return count; 
    }
};