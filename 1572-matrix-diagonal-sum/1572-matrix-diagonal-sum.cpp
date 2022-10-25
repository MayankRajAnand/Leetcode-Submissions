class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        if(n==0)return 0;
        if(n==1)return mat[0][0];
        int i=0;
        int j=0;
        int sum=0;
        while(i<n)
        {
            sum+=mat[i++][j++];
        }
        i=0;
        j=n-1;
        while(i<n)
        {
            sum+=mat[i++][j--];
        }
        if(n%2==1)
            sum-=mat[n/2][n/2];
        return sum;
    }
};