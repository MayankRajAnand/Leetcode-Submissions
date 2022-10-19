class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        for(auto it:s)
        {
            m[it]++;
        }
        int maxi=0;
        int ans=0;
        for(auto it:m)
        {
            if(it.second %2==0)
                ans+=it.second;
            else{
                maxi=max(maxi,it.second);
                 ans+=it.second-1;
            }
               
        }
        if(maxi>0)
            ans++;
        return ans;
        
    }
};