class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,int n,int m)
    {
        if(i>=n or i<0 or j>=m or j<0 or grid[i][j]!='1')return ;
        grid[i][j]='2';
        
        dfs(grid,i+1,j,n,m);
        dfs(grid,i-1,j,n,m);
        dfs(grid,i,j+1,n,m);
        dfs(grid,i,j-1,n,m);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        if(n==0)
            return 0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j,n,m);
                    ans++;
                }
            }
        }
        return ans;
        
    }
};