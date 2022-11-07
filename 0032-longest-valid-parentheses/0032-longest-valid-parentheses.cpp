class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char>st;
        stack<int>ind;
        ind.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                ind.push(i);
            }
            else
            {
                if(!st.empty() and st.top()=='(')
                {
                    st.pop();
                    ind.pop();
                    int temp=ind.top();
                    ans=max(ans,i-temp);
                }
                else{
                    ind.push(i);
                }
            }
        }
        return ans;
    }
};