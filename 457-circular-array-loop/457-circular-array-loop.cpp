class Solution {
public:
    int nextPos(int ind,vector<int>&nums,bool dir)
    {
        bool dirn=nums[ind]>=0;       
        int n=nums.size();
        
        int next=(ind+nums[ind])%n;
        
        if(next<0)
            next=next+n;
        
        if(dirn !=dir)
            return -1;
        if(next==ind)
            return -1;
        
        return next;
    }
   
    bool circularArrayLoop(vector<int>& nums) {
        if(nums.size()<=1)
            return false;
        int n=nums.size();
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                int slow=i,fast=i;
                bool dir=nums[i]>=0;
                while(true)
                {
                    slow=nextPos(slow,nums,dir);
                    if(slow==-1)
                        break;
                    vis[slow]=1;
                    fast=nextPos(fast,nums,dir);
                    if(fast==-1)
                        break;
                    vis[fast]=1;
                    fast=nextPos(fast,nums,dir);
                    if(fast==-1)
                        break;
                    vis[fast]=1;
                    if(fast==slow)
                        return true;
                        
                    
                        
                }
            }
            
        }
        
       return false; 
        
    }
};