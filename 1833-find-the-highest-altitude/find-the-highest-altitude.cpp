class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int maxi = 0;
        int count = 0;

        for(int i=0;i<gain.size();i++){
            int curr = gain[i]+count;
            maxi = max(maxi,curr);
            count = curr;
        }
        return maxi;
    }
};