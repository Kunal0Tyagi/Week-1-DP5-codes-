class Solution {
public:
    int res = 0, empty = 1;
    void dfs(vector<vector<int>>& mat, int x, int y, int count) {
        if (x < 0 || x >= mat.size() || y < 0 || y >= mat[0].size() || mat[x][y] == -1) 
        return;
        
        if (mat[x][y] == 2) {
            if(empty == count) res++; 
            return;
        }
        
        mat[x][y] = -1;
        
        dfs(mat, x+1, y, count+1);
        dfs(mat, x-1, y, count+1);
        dfs(mat, x, y+1, count+1);
        dfs(mat, x, y-1, count+1);
        
        mat[x][y] = 0;
        
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int row, col;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) 
                row = i, col = j;
                else if (grid[i][j] == 0) empty++;
            }
        }
        
        dfs(grid, row, col, 0);
        return res;
    }
};
