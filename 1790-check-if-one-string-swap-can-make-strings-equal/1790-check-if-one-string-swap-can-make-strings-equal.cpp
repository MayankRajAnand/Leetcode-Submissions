class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size())
            return false;
        vector<int>v;
        int i=0,c=0;
        while(i<s1.size())
        {
            if(s1[i]!=s2[i])
            {
                c++;
                v.push_back(i);                 
            }
            i++;
        }
        if(c==0  or( c==2 and s1[v[0]]==s2[v[1]]  and s2[v[0]]==s1[v[1]]))
            return true;
        return false;
        
    }
};