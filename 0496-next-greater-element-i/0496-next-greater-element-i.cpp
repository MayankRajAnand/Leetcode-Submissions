class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        
        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]=i;
        }
    
        vector<int>nge(nums2.size());
        nge[nums2.size()-1]=-1;

        stack<int>st;
        st.push(nums2.size()-1);
        for(int j=nums2.size()-2;j>=0;j--)
        {
            while(!st.empty()  and (nums2[j]>=nums2[st.top()]))
            {
                st.pop();
            }
            if(st.empty())
                nge[j]=-1;
            else
                nge[j]=st.top();
            st.push(j);
        }
        vector<int>ans;
        for(auto it:nums1)
        {
           int ind=m[it];
            if(nge[ind]==-1)
                ans.push_back(-1);
            else
                ans.push_back(nums2[nge[ind]]);
        }
        return ans;
        
        
        
        
    }
};