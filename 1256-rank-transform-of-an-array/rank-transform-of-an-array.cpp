class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(arr.begin(), arr.end());

        sort(temp.begin(), temp.end());

        unordered_map<int,int> rank;
        int r = 1;
        for(int i: temp){
            if(rank.find(i)==rank.end()){
                rank[i] = r;
                r++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = rank[arr[i]];
        }
        return arr;
    }
};