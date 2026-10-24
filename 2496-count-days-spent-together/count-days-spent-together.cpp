class Solution {
public:

    int day(string data){
        int month = stoi(data.substr(0, 2));
        int day = stoi(data.substr(3, 2));

        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        for(int i=0;i<month-1;i++){
            day += days[i];
        }

        return day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
            int a1 = day(arriveAlice);
            int d1 = day(leaveAlice);
            int a2 = day(arriveBob);
            int d2 = day(leaveBob);

            int start = max(a1,a2);
            int end = min(d1,d2);

            return max(0, end-start+1);
        
    }
};