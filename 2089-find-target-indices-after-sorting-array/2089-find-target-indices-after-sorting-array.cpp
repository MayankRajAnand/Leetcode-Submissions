class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        if(nums.size()==1)
        {
            if(nums[0]!=target)return ans;
            else
            {
                ans.push_back(0);
                return ans;
            }
        }
        sort(nums.begin(),nums.end());
        int first=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        cout<<first;
        if(first<0 or nums[first]!=target)return ans;
        int last=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        for(int i=first;i<last;i++)
        {
            ans.push_back(i);
        }
        return ans;
        
    }
};