class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(auto it:s)
        {
            if(it>=65 and it<=90)
                ans+=it+32;
            else    
                ans+=it;
        }
        return ans;
    }
};