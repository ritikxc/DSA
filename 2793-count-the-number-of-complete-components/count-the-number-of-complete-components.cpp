class Solution {
public:

    void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, int &nodes, int &degreeSum){
        visited[node] = true;
        nodes++;

        degreeSum += adj[node].size();

        for(int i:adj[node]){
            if(!visited[i]) dfs(i, adj, visited, nodes, degreeSum);
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        
        vector<vector<int>> adj(n);

        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
         }
        vector<bool> visited(n,false);
        int ans = 0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                int nodes = 0;
                int degreeSum = 0;

                dfs(i, adj, visited, nodes, degreeSum);

                int actualEdges = degreeSum/2;
                int requiredEdges = nodes*(nodes-1)/2;

                if(actualEdges == requiredEdges) ans++;
            }
        }
        return ans;
    }
};