class Solution {
public:
    int hIndex(vector<int>& v) {
        sort(v.begin(),v.end());
        int lo=0;
        int n=v.size();
        int hi=v.size();
        int ans=0;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            int ind=lower_bound(v.begin(),v.end(),mid)-v.begin();
            if(n-ind>=mid)
            {
                ans=mid;
                lo=mid+1;
            }
            else
                hi=mid-1;
            
        }
        return ans;
    }
};