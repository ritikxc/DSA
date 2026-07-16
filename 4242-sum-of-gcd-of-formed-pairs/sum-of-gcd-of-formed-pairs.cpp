class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        vector<int> prefixGcd;

        int mx = 0;

        for (int x : nums) {
            mx = max(mx, x);
            prefixGcd.push_back(gcd(x, mx));
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int left = 0;
        int right = prefixGcd.size()-1;
        long long ans = 0;
        while(left<right){
            ans += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }
        return ans;
    }
};