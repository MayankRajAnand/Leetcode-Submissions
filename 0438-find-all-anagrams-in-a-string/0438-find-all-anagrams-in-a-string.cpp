class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>m1,m2;
        for(auto it:p)
        {
            m1[it]++;
        }
        int req=p.size();
        int c=0;
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            if(i>=req)
            {
                if(m1.find(s[i-req])!=m1.end() and m2[s[i-req]]<=m1[s[i-req]])
                {
                    c--;
                    
                }
                m2[s[i-req]]--;
            }
            if(m1.find(s[i])!=m1.end() and m2[s[i]]<m1[s[i]])
                c++;
            if(m1.find(s[i])!=m1.end()) m2[s[i]]++;  
            if(c==req)
            {
                ans.push_back(i-req+1);
            }
            
        }
        return ans;
    }
};