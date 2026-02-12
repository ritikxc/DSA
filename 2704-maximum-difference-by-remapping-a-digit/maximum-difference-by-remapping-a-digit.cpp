class Solution {
public:
    int minMaxDifference(int num) {

        string s = to_string(num);
        char firstMax = 0;
        for(char c : s){
            if(c != '9'){
                firstMax = c;
                break;
            }
        }

        for(int i=0;i<s.size();i++){
            if(s[i]==firstMax)  s[i] = '9';
        }

        string sm = to_string(num);
        char firstMin = 0;
        for(char c : sm){
        if(c != '0'){
            firstMin = c;
            break;
        }
        }
        for(int i=0;i<sm.size();i++){
            if(sm[i]==firstMin) sm[i] = '0';
        }
        return stoi(s) - stoi(sm);
        
    }
};