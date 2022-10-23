class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int numxor=0;
        for(auto it:nums)
        {
            numxor=numxor^it;
        }
        for(int i=1;i<=n;i++)
        {
            numxor=numxor^i;
        }
        
        int rsb=numxor& -numxor;
        int a=0,b=0;
        for(auto it:nums)
        {
            if(it&rsb)
                a=a^it;
            else
                b=b^it;
        }
        for(int i=1;i<=n;i++)
        {
            if(i&rsb)
                a=a^i;
            else
                b=b^i;
        }
        vector<int>ans;
        for(auto it:nums)
        {
            if(a==it)
            {
                ans.push_back(a);
                ans.push_back(b);
                return ans;
            }
            else if(b==it)
            {
                ans.push_back(b);
                ans.push_back(a);
                return ans;
            }
        }
        return ans;
    }
};