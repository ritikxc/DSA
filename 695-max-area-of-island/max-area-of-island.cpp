class Solution {
public:

    int dfs(vector<vector<int>>& grid, int row, int col){

        int n = grid.size();
        int m = grid[0].size();

        if(row<0 || row>=n || col<0 || col>=m || grid[row][col] == 0) return 0;

        grid[row][col] = 0;

        int count = 1;

        count += dfs(grid, row+1, col);
        count += dfs(grid, row-1, col);
        count += dfs(grid, row, col+1);
        count += dfs(grid, row, col-1);

        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int maxCount = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    int count = dfs(grid, i, j);
                    maxCount = max(count, maxCount);
                }
            }
        }
        return maxCount;
    }
};