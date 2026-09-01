class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        unordered_map<int, int> freq;
        for(int i: nums) freq[i]++;

        int l = 0;
        int r = 1;
        int count = 0;

        while(r<nums.size()){
            if(nums[l] == nums[r]) r++;
            else{
                int check = r-l;
                if(check == freq[nums[l]]) count++;
                
                l=r;
                r++;
            }
        }
        int check = r - l;

        if (check == freq[nums[l]])
            count++;

        return count;
    }
};