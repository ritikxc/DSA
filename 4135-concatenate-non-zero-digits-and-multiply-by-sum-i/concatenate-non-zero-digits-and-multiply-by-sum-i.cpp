class Solution {
public:
    long long sumAndMultiply(int n) {
        
        if(n==0) return 0;
        long long sum = 0;
        string s = to_string(n);
        string x="";

        for(int i =0;i<s.size();i++){
            if(s[i]!='0') x.push_back(s[i]);
            
            sum+= s[i] - '0';
        }
        return sum*stoll(x);
    }
};