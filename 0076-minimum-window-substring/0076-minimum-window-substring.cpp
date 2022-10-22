class Solution {
public:
   string minWindow(string s, string t) 
    {
        if(t.size()>s.size())
        return "";
    
    unordered_map<char,int>m1;
    int reqc=0;
    for(auto it:t)
    {
        m1[it]++;
        reqc++;
    }
   
    
    int j=0,i=0;
    int c=0;
    unordered_map<char,int>m2;
    int ans=INT_MAX;
    string res;
    while(i<s.size())
    {
        while(c!=reqc and i<s.size())
        {
            if(m1.find(s[i])!=m1.end())
            {
                if(m2.find(s[i])==m2.end() or m2[s[i]]<m1[s[i]])
                {
                    c++;
                }
            }
            m2[s[i]]++;
            i++;
        }
        while(c==reqc)
        {
            if(ans>i-j)
            {
                ans=i-j;
                res=s.substr(j,i-j);
            }
            int el=m2[s[j]];
            if(m1.find(s[j])==m1.end() or el>m1[s[j]] )
            {
                m2[s[j]]--;
                j++;
            }
            else{
                c--;
                m2[s[j]]--;
                j++;
                
            }
            
        }
    }
    if(ans==INT_MAX)
        return "";
    return res;


    }
};