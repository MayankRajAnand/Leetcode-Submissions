class Solution {
public:
    
    int func(int j,vector<vector<int>>& grid)
    {
        int m=grid.size();
        int n=grid[0].size();
        int i=0;
        if(j==0 and grid[0][j]==-1)return -1;
        else if(j==n-1 and grid[0][j]==1)return -1;
        else
        {
            while(i<m and j<n and j>=0)
            {
                 if(j==0 and grid[i][j]==-1)return -1;
                else if(j==n-1 and grid[i][j]==1)return -1;
                else if(grid[i][j]==1)
                {
                    if(grid[i][j+1]==-1)return -1;
                    else{
                        i++;
                        j++;
                    }
                }
                
                else if(grid[i][j]==-1)
                {
                    if(grid[i][j-1]==1)return -1;
                    else{
                        i++;
                        j--;
                    }
                }
                if(j<0 or j>=n)return -1;
            }
        }
        return j;
    }
    
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>ans;
        for(int j=0;j<grid[0].size();j++)
        {
            int temp=func(j,grid);
            ans.push_back(temp);
        }
        return ans;
    }
};