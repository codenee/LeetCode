class Solution {

private:
    int n = 0, m = 0;
    int trav(int i, int j, vector<vector<int>>& grid){
        if(i < 0 || i >= n || j < 0 || j >= m || !grid[i][j]){
            return 0;
        }
        grid[i][j] = 0;
        return 1 + trav(i-1, j, grid) + trav(i+1, j, grid) + trav(i, j-1, grid) + trav(i, j+1, grid);
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int ans = 0;
        n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j]){
                    ans = max( ans, trav(i, j, grid));
                }
            }
        }
        return ans;
    }
};