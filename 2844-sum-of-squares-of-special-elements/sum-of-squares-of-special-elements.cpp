class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        long long special = 0;

        for(int i=1;i<=nums.size();i++){

            if(nums.size()%i == 0){
                special += nums[i-1]*nums[i-1];
            }
        }
        return special;
    }
};