class Solution {
public:
    int func(int i,int j,int n,vector<int>& nums1, vector<int>& nums2,vector<vector<int>>&dp)
    {
        if(i==n)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int res=INT_MAX;
        for(int k=0;k<n;k++)
        {
            if((j&(1<<k))==0)
                res=min(res, (nums1[i]^nums2[k]) + func(i+1,j |(1<<k),n,nums1,nums2,dp));
        }
        return dp[i][j]=res;
    }
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<vector<int>>dp(n+1, vector<int>(1<<(n+1),-1));
        return func(0,0,n,nums1,nums2,dp);
    }
};