class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> map;
        vector<int> ans;
        if(nums1.size()>=nums2.size()){
            for(int i:nums1) map[i]++;

            for(int i:nums2){
                if(map.find(i) != map.end() && map[i]>0){
                    ans.push_back(i);
                    map[i]--;

                    if(map[i] == 0)
                        map.erase(i);
                }
            }
        }
        else {
            for(int i:nums2) map[i]++;

            for(int i:nums1){
                if(map.find(i) != map.end() && map[i]>0){
                    ans.push_back(i);
                    map[i]--;

                    if(map[i] == 0)
                        map.erase(i);
                }
            }
        }
        return ans;
    }
};