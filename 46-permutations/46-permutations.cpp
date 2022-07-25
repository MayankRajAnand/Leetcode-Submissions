class Solution {
public:
    
    void perm(int ind,vector<int>&nums,vector<vector<int>>&ans)
    {
        if(ind==nums.size())
            ans.push_back(nums);
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            perm(ind+1,nums,ans);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        perm(0,nums,ans);
        return ans;
    }
};