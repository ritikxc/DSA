class Solution {
public:
    bool validDigit(int n, int x) {

        string s = to_string(n);
        char first = s[0] - '0';
        if(first==x) return false;

        for(int i=1;i<s.size();i++){
            char ch = s[i] - '0';
            if(ch==x) return true;
        }
        return false;
    }
};