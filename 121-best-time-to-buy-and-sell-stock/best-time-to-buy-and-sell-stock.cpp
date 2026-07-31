class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini = prices[0];
        int maxi = 0;
        
        for(int i=1;i<prices.size();i++){
            if(mini>prices[i]) mini = prices[i];
            
            int profit = prices[i]-mini;
            
            if(maxi<profit) maxi = profit;
        }
        return maxi;
    }
};