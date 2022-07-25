class Solution {
public:
    void func(int ind,vector<int>& nums,vector<vector<int>>&ans,vector<int>&v)
    {
        ans.push_back(v);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind and nums[i]==nums[i-1])
                continue;
            v.push_back(nums[i]);
            func(i+1,nums,ans,v);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        
        func(0,nums,ans,ds);
        return ans;
    }
};