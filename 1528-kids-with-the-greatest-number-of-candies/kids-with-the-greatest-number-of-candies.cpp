class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int maxi = INT_MIN;

        for(int i=0;i<candies.size();i++){
            maxi = max(maxi,candies[i]);
        }
        vector<bool> ans;
        for(int i=0;i<candies.size();i++){
            int curr = candies[i]+extraCandies;
            ans.push_back(curr>=maxi);
        }
        return ans;
    }
};