class Solution {
public:
    bool repeatedSubstringPattern(string s) {
      vector<int>lps(s.size(),0);
        int i=1;
        int len=0;
        while(i<s.size())
        {
            if(s[i]==s[len])
            {
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0)
                    len=lps[len-1];
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        int n=s.size();
        if(lps[n-1]!=0 and (lps[n-1] % (n-lps[n-1])==0))return true;
        return false;
    }
};