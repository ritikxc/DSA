class Solution {
public:
    int minimumSwaps(vector<int>& nums) {

        int count0 =0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count0++;
        }
        int done = 0;
        for(int i=nums.size()-count0;i<nums.size();i++){
            if(nums[i]==0) done++;
        }
        return count0-done;
    }
};