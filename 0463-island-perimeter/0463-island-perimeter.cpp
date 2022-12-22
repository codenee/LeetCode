class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
      
        int row = grid.size();
        int column = grid[0].size();
        int result = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                
                if(grid[i][j] == 1){
                    result += 4;
                    if( i + 1 < row && grid[i+1][j] == 1){
                        result--;
                    }
                    if( i - 1 >= 0 && grid[i-1][j] == 1){
                        result--;
                    }
                    if( j + 1 < column && grid[i][j+1] == 1){
                        result--;
                    }
                    if( j - 1 >= 0 && grid[i][j-1] == 1){
                        result--;
                    }
                    
                } 
                
            }
        }
        return result;
    }
};