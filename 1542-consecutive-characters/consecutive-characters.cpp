class Solution {
public:
    int maxPower(string s) {

        int maxsame = 1;
        int same = 1;

        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                same++;
            }
            else same = 1;
            maxsame = max(maxsame, same);
        }
        return maxsame;
    }
};