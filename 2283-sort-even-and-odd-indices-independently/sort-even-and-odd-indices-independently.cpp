class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {

        if(nums.size()==2) return nums;

        vector<int> odd;
        vector<int> even;

        for(int i=0;i<nums.size();i++){
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        sort(even.begin(),even.end());

        vector<int> ans;
        int i=0;
        int j=0;
        for(int k=0;k<nums.size();k++){
            if(k%2==0) ans.push_back(even[i++]);
            else ans.push_back(odd[j++]);
        }
        return ans;
    }
};