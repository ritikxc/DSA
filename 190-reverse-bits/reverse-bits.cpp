class Solution {
public:
    int reverseBits(int n) {

      long int result = 0;

      for(int i=0;i<32;i++){
        result = result*2;
        int lastbit = n%2;
        result = result+lastbit;
        n = n/2;
      }
        return result;
    }
};