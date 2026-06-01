class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int count = 0;
        sort(cost.begin(), cost.end(), greater<int>());
        for(int i=0;i<cost.size();i++)
        {
            if ((i + 1) % 3 == 0)
            {
                continue;
            }
            else count = count + cost[i];
        }
        return count;
        
    }
};