class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int s1 = 0,s2 = 0;
        int count1 = 0, count2 = 0;

        for(int i=0;i<n/2;i++){
            if(num[i] == '?') count1++;
            else s1+= num[i]- '0';
        }
        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?') count2++;
            else s2 +=num[i]- '0';
        }
        if ((count1 + count2) % 2)
            return true;

        return s1 - s2 != 9 * (count2 - count1) / 2;
    }
};