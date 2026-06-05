class Solution {
public:
    int compress(vector<char>& chars) {

        int k=0;
        char obj = chars[0];
        int count = 1;

        for(int i=1;i<chars.size();i++){
            if(chars[i]==obj) count++;
            else{
                chars[k++] = obj;

                if(count > 1){
                    string s = to_string(count);
                    for(char c:s){
                        chars[k++] = c;
                    }
                }
                obj = chars[i];
                count = 1;
            }
        }
        chars[k++] = obj;

                if(count > 1){
                    string s = to_string(count);
                    for(char c:s) chars[k++] = c;
                }
     
     return k;
    }
};