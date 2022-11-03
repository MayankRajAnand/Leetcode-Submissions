class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                int sum=nums[i]+nums[j];
                int lo=j+1;
                int hi=nums.size()-1;
                
                while(lo<=hi)
                {
                    int mid=lo+(hi-lo)/2;
                    if(sum+nums[mid]==target)
                        return target;
                    else if(sum+nums[mid]>target)
                    {
                        int ab=abs(target-(sum+nums[mid]));
                        if(abs(target-ans)>ab)
                            ans=sum+nums[mid];
                        hi=mid-1;
                        
                    }
                    else{
                        int ab=abs(target-(sum+nums[mid]));
                        if(abs(target-ans)>ab)
                            ans=sum+nums[mid];
                        lo=mid+1;
                    }
                }
            }
        }
        return ans;
    }
};