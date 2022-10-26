class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=-1;
        
        long long int tot=0;
        for(int i=0;i<nums.size();i++)
        {
            tot+=nums[i];
            int r=tot%k;
            if(m.find(r)==m.end())
                m[r]=i;
            else if(m.find(r)!=m.end() and i-m[r]>=2)
                return true;
        }
        return false;
        
    }
};