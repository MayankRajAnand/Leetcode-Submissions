class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        
        if(m*n!=r*c)
            return mat;
        vector<vector<int>>ans(r,vector<int>(c,0));
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                temp.push_back(mat[i][j]);
            }
        }
        int k=0;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j]=temp[k++];
            }
        }
        return ans;
            
        
    }
};