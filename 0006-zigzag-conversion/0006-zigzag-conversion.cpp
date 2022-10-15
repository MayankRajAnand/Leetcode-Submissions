class Solution {
public:
    string convert(string s, int nr) {
        vector<string>v(nr,"");
        int n=s.size();
        int i=0;
        while(i<n)
        {
            for(int j=0;j<nr and i<n;j++)
                v[j].push_back(s[i++]);
            for(int j=nr-2;j>=1 and i<n;j--)
                v[j].push_back(s[i++]);
        }
        string res="";
        for(auto it:v)
            res+=it;
        return res;
        
    }
};