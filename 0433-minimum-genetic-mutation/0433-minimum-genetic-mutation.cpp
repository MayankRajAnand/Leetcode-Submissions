class Solution {
public:
    bool check(string a,string b)
    {
        int c=0;
        for(int i=0;i<8;i++)
        {
            if(a[i]!=b[i])c++;
        }
        if(c>1)
            return false;
        return true;
    }
    int helper(string start, string end, vector<string>& bank,vector<int>vis,int count)
    {
        if(start==end)
            return count;
        int mini=INT_MAX;
        for(int i=0;i<bank.size();i++)
        {
            if(bank[i]!=start and check(bank[i],start)==true and vis[i]==-1)
            {
                vis[i]=1;
                mini=min(mini,helper(bank[i],end,bank,vis,count+1));
                vis[i]=-1;
            }
        }
        return mini;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        vector<int>vis(11,-1);
        int ans= helper(start,end,bank,vis,0);
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};