class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        if(n==0)
            return false;
        int m=mat[0].size();
        int i=0;
        int j=m-1;
        while(i<n and j>=0)
        {
            if(mat[i][j]==target)
            {
                return true;
            }
            else if(mat[i][j]>target)
            {
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};

 // bool searchMatrix(vector<vector<int>>& matrix, int target) {
 //        int n=matrix.size();
 //        if(n==0) return false;
 //        int m=matrix[0].size();
 //        int row=0,col=m-1;
 //        while(row<n&&col>=0)
 //        {
 //            if(matrix[row][col]==target) return true;
 //            else if(matrix[row][col]<target) row++;
 //            else col--;
 //        }
 //        return false;
 //    }