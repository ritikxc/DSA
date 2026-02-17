class Solution {
public:
    void sortColors(vector<int>& nums) {

        int left = 0;
        int right = nums.size()-1;
        int two = 0;

        while(left<right){
            if(nums[left]==2){
                swap(nums[left],nums[right]);
                right--;
            }
            else left++;
        }
        left = 0;
        int mid = right;
        while(left<mid){
            if(nums[left]==1 && nums[mid]==0){
                swap(nums[left],nums[mid]);
                left++;
                mid--;
            }
            else if(nums[left]==0){
            left++;
            }
            else mid--;
        }
    }
};