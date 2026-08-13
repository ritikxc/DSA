class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        map<int, int> map;
        int count = 0;

        for(int i: nums){
            int complement = k-i;

            if(map[complement] > 0){
                count++;
                map[complement]--;
            }
            else map[i]++;
        }
        return count;
    }
};