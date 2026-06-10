class Solution {
public:
    vector<vector<int>> ans;

    void help(int idx, vector<int>& nums, vector<int>& temp){

        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }

        //Pick 
        temp.push_back(nums[idx]);
        help(idx+1,nums,temp);

        //Not Pick
        temp.pop_back();
        help(idx+1,nums,temp);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        help(0,nums,temp);

        return ans;
    }
};