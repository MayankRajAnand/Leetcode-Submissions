class Solution {
public:
    void func(int ind,vector<int>&nums,vector<vector<int>>&ans,vector<int>&v)
    {
        if(ind==nums.size())
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[ind]);
        func(ind+1,nums,ans,v);
        v.pop_back();
        func(ind+1,nums,ans,v);
            
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        vector<vector<int>>ans;
        func(0,nums,ans,v);
        return ans;
    }
};