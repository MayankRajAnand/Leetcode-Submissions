class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long tot=0;
        for(auto it:nums)
            tot+=it;
        long csum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(csum==(tot-nums[i]-csum))
                return i;
            csum+=nums[i];
            
        }
        return -1;
    }
};