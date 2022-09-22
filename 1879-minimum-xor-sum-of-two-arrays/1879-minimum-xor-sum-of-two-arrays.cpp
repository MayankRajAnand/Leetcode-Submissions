class Solution {
public:
int tsp(int mask, int pos, int n, vector<vector<int>>&dp, vector<int>&nums1,vector<int>&nums2)
{
    if(pos==n)
        return 0;
    if(dp[mask][pos]!=-1)
        return dp[mask][pos];
    int ans=INT_MAX;
    for(int k= 0; k<n; k++)
    {
        if((mask & (1<<k))==0)
        {
           ans=min(ans,(nums1[pos]^nums2[k]) + tsp(mask | (1<<k), pos+1, n, dp, nums1,nums2));
                        
        }
    }
    
    return dp[mask][pos]=ans;
}
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<vector<int>>dp(1<<(n+1),vector<int>(n+1,-1));
        return tsp(0,0,n,dp,nums1,nums2);
    }
};