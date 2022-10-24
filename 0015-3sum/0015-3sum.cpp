class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        for(int i=0;i<nums.size()-2;i++)
        {
            int l=i+1;
            int r=nums.size()-1;
            vector<int>temp;
            while(l<r)
            {

                if(nums[i]+nums[l]+nums[r]==0)
                {
                    temp.insert(temp.end(),{nums[i],nums[l],nums[r]});
                    if(st.find(temp)==st.end())
                        ans.push_back(temp);
                    st.insert(temp);
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
        return ans;
    }
};