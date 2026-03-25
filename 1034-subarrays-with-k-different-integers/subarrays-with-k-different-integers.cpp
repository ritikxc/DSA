class Solution {
public:
    int atmostK(vector<int>& nums, int k){
        
        int l = 0,r=0,cut=0;
        unordered_map<int,int> map;

        while(r<nums.size()){
            map[nums[r]]++;
            while(map.size()>k){
                map[nums[l]]--;
                if(map[nums[l]]==0){
                    map.erase(nums[l]);
                }
                l++;
            }
                cut += (r-l+1);
            r++;
        }
        return cut;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostK(nums, k) - atmostK(nums, k - 1);
    }
};