class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10000;
        vector<int>freq(n+1, 0);

        for(int i: nums) freq[i]++;

        vector<int> dp(n+1, 0);

        dp[1] = freq[1]*1;

        for(int i=2;i<=n;i++){
            int take = dp[i-2] + i*freq[i];
            int skip = dp[i-1];

            dp[i] = max(take, skip);
        }
        return dp[n];
    }
};