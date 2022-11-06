class Solution {
public:
    bool canBeValid(string s, string locked) {
        int op=0;
        int cl=0;
        if(s.size()%2==1)return false;
        for(int i=0;i<s.size();i++)
        {
            if(locked[i]=='0' or s[i]=='(' )
                op++;
            else
                cl++;
            if(cl>op)return false;
        }
        op=0,cl=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(locked[i]=='0' or s[i]==')')
                cl++;
            else
                op++;
            if(op>cl)return false;
        }
        return true;
    }
};