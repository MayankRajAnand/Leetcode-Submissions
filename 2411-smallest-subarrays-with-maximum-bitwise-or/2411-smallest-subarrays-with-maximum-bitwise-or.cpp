class Solution {
public:
vector<int> smallestSubarrays(vector<int>& nums) {

    vector<int> dp(32,0);
    
    vector<int> ans(nums.size());
    for(int i = nums.size()-1;i > -1;i--){
        
        int num = nums[i];
        int maxi = i;
        
        for(int j = 0;j < 32;j++){
            
            if(num & 1<<j) dp[j] = i;
            
            maxi = max(maxi,dp[j]);
        }
        
        
        ans[i] = maxi - i + 1;
        
    }
    
    return ans;
    
}
};