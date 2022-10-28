class Solution {
public:
    string decodeString(string s) {
     stack<char>st;
    stack<string>s1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=']')
            st.push(s[i]);
        
    
        else{
            string temp="";
            while(st.top()!='[')
            {
                if(st.top()=='*')
                {
                    temp=s1.top()+temp;
                    s1.pop();
                    
                }
                else
                {
                    temp=st.top()+temp;
                }
                st.pop();
            }
            st.pop();
            string y="";
            while(!st.empty() and isdigit(st.top()))
            {
                y=st.top()+y;
                st.pop();
            }
            int n=stoi(y);
            string ans="";
            for(int i=0;i<n;i++)
            {
                ans+=temp;
            }
            st.push('*');
            s1.push(ans);
        }
    }
    string res;
    while(!st.empty())
    {
        if(st.top()=='*')
        {
            if(!s1.empty()){
                res=s1.top()+res;
                s1.pop();
            
            }
        }
        else
        {
            res=st.top()+res;
        }
        st.pop();
    }
    return res;   
    }
};