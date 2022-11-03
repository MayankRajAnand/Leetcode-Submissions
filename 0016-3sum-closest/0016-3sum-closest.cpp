class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++)
        {
            int lo=i+1;
            int hi=nums.size()-1;
            while(lo<hi)
            {
                int sum=nums[i]+nums[lo]+nums[hi];
                if(sum==target)
                    return target;
                else if(sum>target)
                {
                    if( abs(sum-target)<abs(ans-target))
                    {
                        ans=nums[i]+nums[lo]+nums[hi];
                    }
                    hi--;
                }
                else{
                    if(abs(sum-target)<abs(ans-target))
                    {
                        ans=nums[i]+nums[lo]+nums[hi];
                    }
                    lo++;
                }
            }
        }
        return ans;
    }
};