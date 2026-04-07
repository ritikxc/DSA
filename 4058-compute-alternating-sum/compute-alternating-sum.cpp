class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum_odd = 0;
        int sum_even = 0;

        for(int i=0;i<nums.size();i++){
            if(i % 2==0) sum_even+=nums[i];
            else sum_odd+=nums[i];
        }
        return sum_even-sum_odd; 
    }
};