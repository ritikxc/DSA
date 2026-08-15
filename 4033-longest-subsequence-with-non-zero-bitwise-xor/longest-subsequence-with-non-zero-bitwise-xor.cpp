class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        
        int xr = 0;
        bool NonZero = false;

        for(int i: nums){
            xr ^= i;
            if(i!= 0) NonZero = true;
        }
        if(xr != 0) return nums.size();

        if(NonZero) return nums.size()-1;

        return 0;
    }
};