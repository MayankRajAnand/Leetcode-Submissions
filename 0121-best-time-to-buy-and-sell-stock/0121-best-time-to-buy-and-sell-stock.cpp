class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxi=INT_MIN;
        for(auto it:prices)
        {
            int temp=it-mini;
            maxi=max(maxi,temp);
            
            mini=min(mini,it);
        }
        return maxi;
    }
};