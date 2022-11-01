class Solution {
public:
    
    int helper(int i,int j,vector<vector<int>>& grid, int k,vector<vector<vector<int>>>&dp)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]==9)return 1e7;
        if(grid[i][j]==1 and k==0)return dp[i][j][k]=1e7;
        if(i==0 and j==0 and k>=0)return 0;
        if(dp[i][j][k]!=-1)
            return dp[i][j][k];
        int temp=grid[i][j];
        grid[i][j]=9;
        if(temp==1)k--;
        int l = 1+helper(i, j - 1,grid, k,dp);
        int r = 1+helper(i, j + 1,grid, k,dp);
        int u = 1+helper(i + 1, j,grid, k,dp);
        int d = 1+helper(i - 1, j,grid, k,dp);
        dp[i][j][k]=min(min(l,r),min(u,d));
        grid[i][j] = temp;
        return dp[i][j][k];
       
        
        
    }
    int shortestPath(vector<vector<int>>& grid, int k) {
        vector<vector<vector<int>>> dp(vector<vector<vector<int>>>(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(k + 1, -1)))); 
        int ans = helper( grid.size() - 1, grid[0].size() - 1,grid,k,dp);
        if (ans >= 1e7) return -1; 
        return ans;
    }
};