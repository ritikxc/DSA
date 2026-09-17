class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(int i: nums) check.insert(i);

        return nums.size() != check.size();
    }
};