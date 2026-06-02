class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration, 
                           vector<int>& waterStartTime, 
                           vector<int>& waterDuration)
        {
            int ans = INT_MAX;
            int n = landDuration.size();
            int m = waterDuration.size();

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){

                    int LandFinish = landStartTime[i]+landDuration[i];
                    int waterBegin = max(LandFinish, waterStartTime[j]);
                    ans = min(ans, waterBegin + waterDuration[j]);

                    int WaterFinish = waterStartTime[j]+waterDuration[j];
                    int LandBegin = max(WaterFinish, landStartTime[i]);
                    ans = min(ans, LandBegin + landDuration[i]);
                }
            }
            return ans;
        }
};