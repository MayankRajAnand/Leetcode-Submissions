class Solution {
public:
    int helper(int ind,vector<int>& jD, int d,vector<vector<int>>&dp)
    {
        if(d==1)
            return *max_element(jD.begin()+ind,jD.end());
        if(dp[ind][d]!=-1)
            return dp[ind][d];
        int res=INT_MAX;
        int maxi=INT_MIN;
        for(int i=ind;i<=jD.size()-d;i++)
        {
            maxi=max(maxi,jD[i]);
            res=min(res,maxi+helper(i+1,jD,d-1,dp));
        }
        return dp[ind][d]=res;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        if(d==1)
            return *max_element(jobDifficulty.begin(),jobDifficulty.end());
        if(jobDifficulty.size()<d)
            return -1;
        vector<vector<int>>dp(jobDifficulty.size()+1,vector<int>(d+1,-1));
        return helper(0,jobDifficulty,d,dp);
        
    }
};