class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        int ans=0;
        if(target<nums[0])return 0;
        if(target>nums[nums.size()-1])return nums.size();
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
            {
                lo=mid+1;
            }
            else
            {
                ans=mid;
                hi=mid-1; 
            }
        }
        return ans;
    }
};