class Solution {
public:
    bool hasduplicate(string s)
    {
        unordered_set<char>st;
        for(auto it:s)
        {
            if(st.find(it)!=st.end())return true;
            st.insert(it);
        }
        return false;
    }
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size() or s.size()==1)return false;
        if(s==goal)
            return hasduplicate(s);
        
        int k=-1,l=-1,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i])
            {
                c++;
                if(c>2)return false;
                if(k==-1)
                    k=i;
                else
                    l=i;
            }
            
        }
        if(k==-1 or l==-1)return false;
        swap(s[k],s[l]);
        return s==goal;
            
    }
};