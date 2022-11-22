class Solution {
public:
int dp[10001][101];
    int calculate(int n,int i)
    {
        if(n==0)
        {
            return 0;
        }
        if(i*i > n)
        {
            return 1e5;
        }
        if(dp[n][i]!=-1)
        {
            return dp[n][i];
        }
        int taken = 1e5;
        if(n-(i*i) >= 0)
        {
            taken = calculate(n-(i*i),i)+1;
        }
        return dp[n][i]=min(calculate(n,i+1),taken);
    }
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        return calculate(n,1);
    }
};