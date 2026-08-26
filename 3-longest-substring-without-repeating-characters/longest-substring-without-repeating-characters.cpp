class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> last;
        int l = 0;
        int ans = 0;

        for(int i=0;i<s.size();i++){
            if(last.count(s[i]) && last[s[i]]>=l){
                l = last[s[i]]+1;
            }
            last[s[i]] = i;
            ans = max(ans, i-l+1);
        }
        return ans;
    }
};