class Solution {
public:
    string makeGood(string s) {
        string ans;
        stack<char>st;
        for(auto it:s)
        {
           if(st.empty())
               st.push(it);
            else if(it>=65 and it<=90 and st.top()>=97 and st.top()<=122 and toupper(st.top())==it)
                st.pop();
            else if(st.top()>=65 and st.top()<=90 and it>=97 and it<=122 and tolower(st.top())==it)
               st.pop();
            else
                st.push(it);
        }
        
        if(st.empty())return "";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};