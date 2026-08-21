class Solution(object):
    def maxProfit(self, prices):
        
        mini = prices[0]
        maxi = 0

        for i in range(len(prices)):
            if mini > prices[i]:
                mini = prices[i]
            profit = prices[i]-mini
            maxi = max(maxi, profit)
        
        return maxi
        