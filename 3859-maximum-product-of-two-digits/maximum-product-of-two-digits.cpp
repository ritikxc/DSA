class Solution {
public:
    int maxProduct(int n) {
        
        string st = to_string(n);

        sort(st.begin(), st.end());

        int a = st[st.size() - 1] - '0';
        int b = st[st.size() - 2] - '0';

        return a*b;
    }
};