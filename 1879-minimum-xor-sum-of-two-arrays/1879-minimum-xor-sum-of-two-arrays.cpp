class Solution {
public:
int tsp(int pos, int mask, int n, vector<vector<int>>&dp, vector<int>&nums1,vector<int>&nums2)
{
    if(pos==n)
        return 0;
    if(dp[pos][mask]!=-1)
        return dp[pos][mask];
    int ans=INT_MAX;
    for(int k= 0; k<n; k++)
    {
        if((mask & (1<<k))==0)
        {
           ans=min(ans,(nums1[pos]^nums2[k]) + tsp(pos+1, mask | (1<<k), n, dp, nums1,nums2));
                        
        }
    }
    
    return dp[pos][mask]=ans;
}
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<vector<int>>dp(n+1,vector<int>(1<<(n+1),-1));
        return tsp(0,0,n,dp,nums1,nums2);
    }
};