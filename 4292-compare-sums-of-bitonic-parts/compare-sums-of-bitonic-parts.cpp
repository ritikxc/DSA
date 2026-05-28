class Solution {
public:

    int peak = 0;

    void help(vector<int>& nums){

        if(nums.size()==1) return;
        if(nums.size()==2) {
        if (nums[0] > nums[1]) peak = 0;
        else peak = 1;
    }
         
        int left = 0;
        int right = nums.size()-1;

        while(left<right){
            int mid = (left+right)/2;
            if(nums[mid]>nums[mid+1]) right = mid;
            else left = mid+1;
        }
        peak = left;
    }
    int compareBitonicSums(vector<int>& nums) {

        help(nums);
        
        long long ascending = 0;
        long long descending = 0;
        for(int i=0;i<=peak;i++) ascending += nums[i];
        for(int i=peak;i<nums.size();i++) descending += nums[i];

        if(ascending>descending) return 0;
        else if(ascending<descending) return 1;
        
        return -1;
    }
};