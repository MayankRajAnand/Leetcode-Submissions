class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 or nums[i]!=nums[i-1]){
            int l=i+1;
            int r=nums.size()-1;
            
                vector<int>temp;
                while(l<r)
                {
                    
                    if(nums[i]+nums[l]+nums[r]==0)
                    {
                        temp.insert(temp.end(),{nums[i],nums[l],nums[r]});
                        ans.push_back(temp);
                        while(l<r and nums[l]==nums[l+1])l++;
                        while(l<r and nums[r]==nums[r-1])r--;
                        l++;
                        r--;
                    }
                    else if(nums[i]+nums[l]+nums[r]>0)
                    {
                        r--;
                    }
                    else
                        l++;
                    temp.clear();

                }
            }
        }
        return ans;
    }
};