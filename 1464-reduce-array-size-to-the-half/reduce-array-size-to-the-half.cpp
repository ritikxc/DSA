class Solution {
public:
    int minSetSize(vector<int>& arr) {

        unordered_map<int,int> freq;

        for(int i=0;i<arr.size();i++) freq[arr[i]]++;

        vector<int> count;

        for(auto i=freq.begin();i!= freq.end();i++) count.push_back(i->second);

        sort(count.begin(), count.end(), greater<int>());

        int sum = 0;
        int removed = 0;
        int half = arr.size()/2;

        for(int i=0;i<count.size();i++){
            sum += count[i];
            removed++;
            if(sum>=half) break;
        }
        return removed;
    }
};