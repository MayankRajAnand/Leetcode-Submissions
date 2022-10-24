class Solution {
public:
    int compress(vector<char>& chars) {
        string ans;
        int c=1;
        int i=0;
        for(i=0;i<chars.size()-1;i++)
        {
            if(chars[i]==chars[i+1])
                c++;
            else
            {
                ans+=chars[i];
                if(c>1)
                    ans+=to_string(c);
                c=1;
            }
        }
        ans+=chars[i];
        if(c>1)
            ans+=to_string(c);
        for(int i=0;i<ans.size();i++)
        {
            chars[i]=ans[i];
        }
        return ans.size();
    }
};