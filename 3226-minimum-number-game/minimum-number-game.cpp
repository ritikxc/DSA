class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<int> ans;

        int alice, bob;
        int i=0;

        while(i<nums.size()-1){
            alice = nums[i];
            bob = nums[i+1];

            ans.push_back(bob);
            ans.push_back(alice);
            i += 2;
        }
        return ans;  
    }
};