class Solution {
public:
    int f(int i,int j1,int j2,int n,int m,vector<vector<int>>& grid,vector<vector<vector<int>>>& dp)
    {
        if(j1<0 or j2<0 or j1>=m or j2>=m)
            return 0;
        if(i==n-1)
        {
            if(j1==j2)
                return grid[i][j1];
            else{
                return grid[i][j1]+grid[i][j2];
            }
        }
        if(dp[i][j1][j2]!=-1)
            return dp[i][j1][j2];
        int maxi=-1e8;
        for(int di=-1;di<=1;di++)
        {
            for(int dj=-1;dj<=1;dj++)
            {
                int val=0;
                if(j1==j2)
                {
                 val=grid[i][j1]+f(i+1,j1+di,j2+dj,n,m,grid,dp);
                }
                else
                    val=grid[i][j1]+grid[i][j2]+f(i+1,j1+di,j2+dj,n,m,grid,dp);
                
                 maxi=max(maxi,val);   
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return f(0,0,m-1,n,m,grid,dp);
    }
};