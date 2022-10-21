class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        int count=0;
        while(i>=2)
        {
            int l=0;
            int r=i-1;            
            while(l<r)
            {
                if(nums[l]+nums[r]>nums[i]){
                    count+=r-l;
                    r--;
                }
                    
                
                else
                    l++;     
            }
            i--;
        }
        return count;
    }
};