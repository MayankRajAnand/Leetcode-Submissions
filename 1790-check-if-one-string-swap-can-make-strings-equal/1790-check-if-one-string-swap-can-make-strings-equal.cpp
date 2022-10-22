class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size())
            return false;
        int i=0,c=0;
        while(i<s1.size())
        {
            if(s1[i]!=s2[i])
                c++;
            i++;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2 and c<=2)
            return true;
        return false;
    }
};