class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char>set={'a','e','i','o','u','A','E','O','I','U'};
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            while(set.find(s[i])==set.end())
            {
                i++;
                if(i==s.size())return s;
            }
            while(set.find(s[j])==set.end()){
                j--;
                if(j==-1)return 0;
            }
            if(i<j)
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            
        }
        return s;
    }
};