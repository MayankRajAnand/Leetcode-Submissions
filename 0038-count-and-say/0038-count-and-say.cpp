class Solution {
public:
    string ans(string s)
    {
        string temp="";
        int c=1;
        for(int i=0;i<s.size()-1;i++)
        {

            if(s[i]==s[i+1])
            {
                c++;
            }
            else{
                temp+=to_string(c);
                temp+=s[i];
                c=1;
            }
        }
        temp+=to_string(c);
        temp+=s[s.size()-1];
        return temp;
    }
    string countAndSay(int n) {
        vector<string>dp(n+1,"");
        dp[0]="1";
        dp[1]="11";
        for(int i=2;i<=n;i++)
        {
            dp[i]=ans(dp[i-1]);
        }
        return dp[n-1];
    }
};