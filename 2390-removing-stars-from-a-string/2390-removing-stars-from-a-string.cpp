class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(st.empty())st.push(s[i]);
            else{
                if(s[i]=='*')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        if(st.empty())
            return "";
        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};