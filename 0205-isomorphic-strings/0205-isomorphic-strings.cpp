class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,char>m1,m2;
        for(int i=0;i<s.size();i++){
            
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
        string ans1,ans2="";
        for(int i=0;i<s.size();i++)
        {
            ans1+=m1[s[i]];
            ans2+=m2[t[i]];
        }
        return (ans1==t and ans2==s);
    }
};