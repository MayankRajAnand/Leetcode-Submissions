class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> ans(4,0);
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        set<vector<int>> st;
        
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long sum= (long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum<target){
                        k++;
                    }
                    else if(sum>target){
                        l--;
                    }
                    else{
                        ans[0]=nums[i];
                        ans[1]=nums[j];
                        ans[2]=nums[k];
                        ans[3]=nums[l];
                        
                        if(st.size()==0){
                            res.push_back(ans);
                            st.insert(ans);
                        }
                        else{
                            auto it=st.find(ans);
                            if(it==st.end()){
                                res.push_back(ans);
                                st.insert(ans);
                            }
                        }
                        k++;
                    }
                }
            }
        }
        return res;
    }
};