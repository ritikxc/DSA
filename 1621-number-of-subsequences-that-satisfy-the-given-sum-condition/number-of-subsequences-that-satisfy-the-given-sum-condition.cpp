class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size()-1;
        long long count = 0;
        const int MOD = 1e9 + 7;
        int n = nums.size();

        vector<int> p2(n);

        p2[0] = 1;

        for(int i = 1; i < n; i++)
           {
            p2[i] = (2LL * p2[i-1]) % MOD;
           }

        while(left<=right){
            if(nums[left]+nums[right]<= target){
                count = (count+ p2[right-left]) % MOD;
                left++;
            }
            else{
                right--;
            }
        }
        return count;   
    }
};