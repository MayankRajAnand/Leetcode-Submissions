class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1,m2;
        for(auto it:nums1)
            m1[it]++;
        for(auto it:nums2)
            m2[it]++;
        vector<int>ans;
        for(auto it:m1)
        {
            if(m2.find(it.first)!=m2.end())
            {
                int mini=min(it.second,m2[it.first]);
                for(int i=0;i<mini;i++)
                {
                    ans.push_back(it.first);
                }
            }
        }
        return ans;
    }
};