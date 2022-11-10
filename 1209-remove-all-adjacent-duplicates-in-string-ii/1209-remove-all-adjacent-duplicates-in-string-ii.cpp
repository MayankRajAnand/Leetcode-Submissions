class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())st.push({s[i],1});
            else if(st.top().first==s[i])
            {
                int c=st.top().second;
                if(c==k-1)
                {
                    for(int j=0;j<k-1;j++)
                        st.pop();
                }
                else
                    st.push({s[i],c+1});
            }
            else{
                st.push({s[i],1});
            }
        }
        string ans="";
        if(st.empty())
            return ans;
        while(!st.empty())
        {
            ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};