class Solution {

private:
    void dfs(vector<vector<char>> &grid, int r, int c) {
        int row_num = grid.size();
        int col_num = grid[0].size();

        grid[r][c] = '0';
        if(r-1 >= 0 && grid[r-1][c] == '1') dfs(grid, r-1, c);
        if(r+1 < row_num && grid[r+1][c] == '1') dfs(grid, r+1, c);
        if(c-1 >= 0 && grid[r][c-1] == '1') dfs(grid, r, c-1);
        if(c+1 < col_num && grid[r][c+1] == '1') dfs(grid, r, c+1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int row_num = grid.size();
        int col_num = grid[0].size();
        int num_islands = 0;
        for(int r = 0; r < row_num; r++) {
            for(int c = 0; c < col_num; c++) {
                if(grid[r][c] == '1') {
                    num_islands++;
                    dfs(grid, r, c);
                }
            }
        }
        return num_islands;
    }
};
