class Solution {
public:
    
    vector<vector<vector<int>>> dp;
    int s(vector<vector<int>> &grid, int k, int i, int j)
    {
        if (i < 0 || j < 0 || j >= grid[0].size() || i >= grid.size() || grid[i][j] == 7) return 1e6; 

        if (grid[i][j] == 1 && k == 0) return dp[i][j][k] = 1e6; 

        if (i == 0 && j == 0) return 0; 

        if (dp[i][j][k] != -1) return dp[i][j][k]; 

        int lastItem = grid[i][j];

        grid[i][j] = 7;   // using as visited position

        if (lastItem == 1) k--;

        int l = s(grid, k, i, j - 1);
        int r = s(grid, k, i, j + 1);
        int u = s(grid, k, i + 1, j);
        int d = s(grid, k, i - 1, j);

        dp[i][j][k] = 1 + min(min(l, r), min(u, d)); 
        grid[i][j] = lastItem;

        return dp[i][j][k];
    }

    int shortestPath(vector<vector<int>> &grid, int k)
    {
        dp = vector<vector<vector<int>>>(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(k + 1, -1))); 
        int ans = s(grid, k, grid.size() - 1, grid[0].size() - 1);
        if (ans >= 1e6) return -1; 
        return ans;
    }

};