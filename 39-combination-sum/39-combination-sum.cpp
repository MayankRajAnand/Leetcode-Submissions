class Solution {
public:
    void func(int ind,vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>&v)
    {
        if(ind==candidates.size())
        {    if(target==0)
            {
                ans.push_back(v);
                            
            }
            return ;
        }
        if(candidates[ind]<=target)
        {
            v.push_back(candidates[ind]);
            func(ind,candidates,target-candidates[ind],ans,v);
            v.pop_back();
        }
        func(ind+1,candidates,target,ans,v);          
        
            
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        vector<vector<int>>ans;
        func(0,candidates,target,ans,v);
        return ans;
    }
};