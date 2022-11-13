class Solution {
public:
    string reverseWords(string s) {
        stringstream st(s);
        string temp,ans;
        while(st>>temp)
        {
            ans=temp+" "+ans;
        }
        ans.pop_back();
        return ans;
    }
};