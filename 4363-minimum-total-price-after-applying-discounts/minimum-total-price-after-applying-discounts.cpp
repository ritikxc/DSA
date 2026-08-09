class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        int n = prices.size();
        int m = discounts.size();
        double total = 0;

        int mini = min(n, m);

        for(int i=0;i<mini;i++){
            total += (long double)prices[i] * (100 - discounts[i]) / 100.0;
        }

        for(int i=mini;i<n;i++){
            total += prices[i];
        }
        return double(total);
    }
};