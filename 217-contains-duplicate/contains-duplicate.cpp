class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(int i: nums) check.insert(i);

        return check.size() != nums.size();
    }
};