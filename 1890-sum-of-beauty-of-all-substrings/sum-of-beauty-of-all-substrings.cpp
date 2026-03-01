class Solution {
public:
    int beautySum(string s) {

        int totalBeauty = 0;

        for(int i=0;i<s.size();i++){
            unordered_map<char,int> freq;

            for(int j=i;j<s.size();j++){
                freq[s[j]]++;
    
                int maxi = INT_MIN;
                int mini = INT_MAX;
        
                for(auto it=freq.begin();it!=freq.end();it++){
                    maxi = max(maxi, it->second);
                    mini = min(mini, it->second);
                }
                totalBeauty += (maxi-mini);
            }
        }
        return totalBeauty;       
    }
};