class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        int maxlen = 0,idx;
        
        for(int len = 1;len<=n;len++){
            
            for(int i = 0,j = len-1;j<n;i++,j++){
                if(len==1) dp[i][j] = true;
                else if(len==2) dp[i][j] = (s[i]==s[j]);
                else{
                    if(s[i]==s[j] && dp[i+1][j-1]==true) dp[i][j] = true;
                }
                
                if(dp[i][j]==true){
                    maxlen = len;
                    idx = i;
                };
            }
        }
        return s.substr(idx,maxlen);
    }
};