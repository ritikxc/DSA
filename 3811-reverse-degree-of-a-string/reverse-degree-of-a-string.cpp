class Solution {
public:
    int reverseDegree(string s) {

        long long product = 0;

        for(int i=0;i<s.size();i++)
        {
            int reverse = 26- (s[i]- 'a');
            product += reverse*(i+1);
        }
        return product;
    }
};