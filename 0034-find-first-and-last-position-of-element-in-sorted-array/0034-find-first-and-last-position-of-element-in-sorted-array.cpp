class Solution {
public:
    int first(vector<int>& nums, int target)
    {
        int ans=-1;
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                hi=mid-1;
            }
            else if(nums[mid]>target)
                hi=mid-1;
            else
                lo=mid+1;
            
        }
        return ans;
    }
    int last(vector<int>& nums, int target)
    {
        int ans=-1;
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                lo=mid+1;
            }
            else if(nums[mid]>target)
                hi=mid-1;
            else
                lo=mid+1;
            
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int f=first(nums,target);
        int s=last(nums,target);
        ans.push_back(f);
        ans.push_back(s);
        return ans;
    }
};