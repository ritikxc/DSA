class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // intersection mtlb dono array(nums1,nums2) ke common elements aur UNIQUE(acc. to the question).

        unordered_set<int> s(nums1.begin(),nums1.end()); // ek set bna jisme nums1 ke saare elements store krdie.
        vector<int> ans;

        for(int i=0;i<nums2.size();i++){
            if(s.count(nums2[i])==1){ // checking ki current element set ke andr h ya nahi(mtlb nums1 m tha ya nhi).

                ans.push_back(nums2[i]); // agr present tha to usko result array m store kr denge.

                s.erase(nums2[i]); // fir same element ko set se remove kr denge kyuki agr waps loop chala to same element waps result m aa jaega but hume sirf unique elements add krne h.
            }
        }
        return ans;
    }
};