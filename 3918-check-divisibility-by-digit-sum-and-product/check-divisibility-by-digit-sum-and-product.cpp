class Solution {
public:
    bool checkDivisibility(int n) {

        if(n<10) return false;
        int check =  n;
        int sum = 0;
        int product = 1;

        while(n>0){
            sum += n%10;
            product *= n%10;
            n /= 10;
        }
        return check%(sum+product) == 0;
    }
};