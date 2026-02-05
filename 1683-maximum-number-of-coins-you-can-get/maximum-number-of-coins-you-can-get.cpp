class Solution {
public:
    int maxCoins(vector<int>& piles) {

        sort(piles.begin(),piles.end());

        int l = 0;
        int r = piles.size()-1;
        int count = 0;

        while(l<r){
            r--;
            count += piles[r];
            r--;
            l++;
        }
        return count;
    }
};