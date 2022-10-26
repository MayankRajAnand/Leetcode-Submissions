class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int maxfreq=0;
        unordered_map<char,int>m;
        int ans=0;
        while(i<s.size())
        {
            m[s[i]]++;
            if(m[s[i]]>maxfreq)
                maxfreq=m[s[i]];
            if(i-j+1 -maxfreq<=k)
                ans=max(ans,i-j+1);
            else
            {
                m[s[j]]--;
                j++;
            }
                
            
            i++;
        }
        return ans;
    }
};