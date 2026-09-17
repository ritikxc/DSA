class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int CurrSum = 0;
        int MaxSum = INT_MIN;

        for(int i:nums){
            CurrSum = max(i,i+CurrSum);
            MaxSum = max(CurrSum,MaxSum);
        }
        return MaxSum;
    }
};