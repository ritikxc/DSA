class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,int> freq;

        for(int i:nums) freq[i]++;

        for(auto it=freq.begin();it!=freq.end();it++){
            if(it->second > n/2) return it->first;
        }
        return 0;
    }
};