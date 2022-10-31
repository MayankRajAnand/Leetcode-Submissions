class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int g=0;g<n;g++)
        {
            int val=matrix[0][g];
            for(int i=0,j=g; i<m and j<n;i++,j++)
            {
                if(matrix[i][j]!=val)
                    return false;
            }
        }
        for(int g=1;g<m;g++)
        {
            int val=matrix[g][0];
            for(int i=g,j=0;i<m and j<n;i++,j++)
            {
                if(matrix[i][j]!=val)
                    return false;
            }
        }
        return true;
    }
};