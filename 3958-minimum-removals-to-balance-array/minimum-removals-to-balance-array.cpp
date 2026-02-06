class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        int left = 0;
        int count = 0;

        for(int i=0;i<nums.size();i++){
            while(nums[i]>(long long)nums[left]*k){
                left++;
            }
            count = max(count, i-left+1);
        }
        return nums.size()-count;
    }
};