class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        if(nums.size()<4)
            return ans;
        for(int i=0;i<nums.size()-3;i++)
        {
            if(i==0 or nums[i]!=nums[i-1]){
                for(int j=i+1;j<nums.size()-2;j++)
                {
                    if(j==i+1 or nums[j]!=nums[j-1])
                    {
                        int l=j+1;
                        int r=nums.size()-1;
                        
                        while(l<r)
                        {
                            long long int sum=(long)nums[i]+nums[j]+nums[l]+nums[r];
                            if(sum==target)
                            {
                                vector<int>temp={nums[i],nums[j],nums[l],nums[r]};
                                ans.push_back(temp);
                                temp.clear();
                                
                                while(l<r and nums[l]==nums[l+1])l++;
                                while(l<r and nums[r]==nums[r-1])r--;
                                
                                l++;
                                r--;
                            }
                            else if(sum>target)
                                r--;
                            
                            else
                                l++;
                        }
                    }
                }
            }
        }
        return ans;
        
    }
};