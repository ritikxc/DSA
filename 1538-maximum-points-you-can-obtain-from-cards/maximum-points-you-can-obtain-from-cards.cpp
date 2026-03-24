class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int totalsum = 0;
        for(int i=0;i<cardPoints.size();i++){
            totalsum += cardPoints[i];
        }
        int n = cardPoints.size();
        int windowS = n-k;
        if(windowS == 0) return totalsum;
        int currS=0;

        for(int i=0;i<windowS;i++){
            currS+=cardPoints[i];
        }
        int miniS = currS;
        for(int i=windowS;i<n;i++){
            currS += cardPoints[i];
            currS -= cardPoints[i-windowS];

            if(currS < miniS) miniS = currS;
        }
        return totalsum - miniS;
    }
};