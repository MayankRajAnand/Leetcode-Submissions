class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans;
        int i=0,j=0;
        
        while(i<m and j<n)
        {
            if(nums1[i]<nums2[j])
                ans.push_back(nums1[i++]);
            else
                ans.push_back(nums2[j++]);                
                
        }
        for(;i<m;i++)
            ans.push_back(nums1[i]);
        for(;j<n;j++)
            ans.push_back(nums2[j]);
        
        for(int i=0;i<m;i++)
        {
            nums1[i]=ans[i];
        }
        for(int i=0;i<n;i++)
            nums1[m+i]=ans[m+i];
        
    }
};