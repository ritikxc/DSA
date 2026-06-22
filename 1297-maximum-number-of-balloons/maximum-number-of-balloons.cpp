class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char,int> st;
        unordered_map<char,int> ans;
        string target = "balloon";
        int curr = INT_MAX;

        for(char i:text) st[i]++;
        for(char i:target) ans[i]++;

        for(auto it=ans.begin();it!=ans.end();it++){
            if(st.find(it->first)==st.end()) return 0;

            int freq = st[it->first] / it->second;
            curr = min(curr, freq);
        }
        return curr;
    }
};