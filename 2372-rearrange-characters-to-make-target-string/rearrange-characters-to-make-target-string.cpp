class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        unordered_map<char,int> st;
        unordered_map<char,int> ans;
        int curr = INT_MAX;

        for(char i:s) st[i]++;
        for(char i:target) ans[i]++;

        for(auto it=ans.begin();it!=ans.end();it++){
            if(st.find(it->first)==st.end()) return 0;

            int freq = st[it->first] / it->second;
            curr = min(curr, freq);
        }
        return curr;
    }
};