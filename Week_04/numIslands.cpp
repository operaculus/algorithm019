class Solution {
public:    
  void dfs(vector<vector<char>> &grid,int cur_i,int cur_j)
    {
        if(cur_i<0||cur_i==grid.size()||cur_j<0||cur_j==grid[0].size()||grid[cur_i][cur_j]=='0') return;
        grid[cur_i][cur_j]='0';
        int di[4]={0,0,1,-1};
        int dj[4]={1,-1,0,0};
        for(int index=0;index<4;index++)
        {
            dfs(grid,cur_i+di[index],cur_j+dj[index]);
        }
        return;
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    dfs(grid,i,j);
                } 
            }
        }
        return ans;
    }

};
