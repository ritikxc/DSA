class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int mini = 0;
        int maxi = 0;
        int size = nums.size();

        for(int i=0;i<size;i++){
            if(nums[i]>nums[maxi]) maxi = i;
            
            if(nums[i]<nums[mini]) mini = i;
        }
        int countSt = max(maxi, mini) +1;
        int countEnd = size- min(maxi, mini);

        int countDiff = min(mini, maxi)+1 + size- max(mini, maxi);

        return min({countSt, countEnd, countDiff});
    }
};