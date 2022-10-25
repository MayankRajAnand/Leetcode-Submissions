class Solution {
public:
    int helper(int n,vector<int>&cost,vector<int>&dp)
    {
         if(n==0 or n==1)
         {
             return 0;
         }
        if(dp[n]!=-1)
            return dp[n];
        int one=cost[n-1]+helper(n-1,cost,dp);
        int two=cost[n-2]+helper(n-2,cost,dp);
        
        return dp[n]=min(one,two);
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        return helper(cost.size(),cost,dp);
    }
};