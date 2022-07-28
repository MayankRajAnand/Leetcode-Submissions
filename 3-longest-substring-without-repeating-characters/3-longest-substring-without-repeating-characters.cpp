class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int i=0;int j=0;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])!=m.end())
            {
                int k=m[s[i]];
                while(j<=k)
                {
                //     m[s[j]]--;
                    // if(m[s[j]]==0)
                    m.erase(s[j]);
                    j++;
                }              
                // j=k+1;
                maxi=max(maxi,i-j+1);
                m[s[i]]=k;
                
            }
            m[s[i]]=i;
            maxi=max(maxi,i-j+1);
                
        }
        return maxi;
        
    }
};