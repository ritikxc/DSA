class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_set<int> present;

        for(int i: nums) present.insert(i);

        for(int i= k; ;i+=k){
            if(present.find(i) == present.end()) return i;
        }
        return 0;
    }
};