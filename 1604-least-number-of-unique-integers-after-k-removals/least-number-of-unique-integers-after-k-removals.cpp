class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        unordered_map<int,int> freq;

        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }

        vector<pair<int,int>> v;
        for(auto &it : freq){
        v.push_back({it.second, it.first});
        }

        sort(v.begin(), v.end());

        int i=0;
        while(i<v.size() && k >= v[i].first){
            k -= v[i].first;
            freq.erase(v[i].second);
            i++;
        }
        return freq.size();
    }
};