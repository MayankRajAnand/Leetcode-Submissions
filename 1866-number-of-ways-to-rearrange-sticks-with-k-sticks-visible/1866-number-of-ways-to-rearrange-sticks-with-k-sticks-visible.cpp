class Solution {
public:
    long long int helper(int n,int k ,vector<vector<long long int>>&dp)
    {
        if(n==k)
            return 1;
        if(n==0 or k==0)
            return 0;
        if(dp[n][k]!=-1)
            return dp[n][k];
        long long int take=helper(n-1,k-1,dp)%1000000007;
        long long int nottake=(n-1)*helper(n-1,k,dp)%1000000007;
        
        return dp[n][k]=(take+nottake)%1000000007;
        
    }
    long long int rearrangeSticks(int n, int k) {
        vector<vector<long long int>>dp(n+1,vector<long long int>(k+1,-1));
        return helper(n,k,dp);
    }
};