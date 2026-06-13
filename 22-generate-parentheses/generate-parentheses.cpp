class Solution {
public:

    void help(int open, int close, int n, string s, vector<string>& ans){
        if(s.size()== 2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
        help(open+1, close, n, s+ '(', ans);
        }

        if(close<open){
            help(open, close+1, n, s+ ')', ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        help(0,0,n,"",ans);
        return ans;
    }
};