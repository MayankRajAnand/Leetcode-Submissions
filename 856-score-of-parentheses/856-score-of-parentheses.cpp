class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<string>st;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            st.push("(");
        else if(s[i]==')' && st.top()=="(")
        {
            st.pop();
            if(!st.empty() && isdigit(st.top()[0]))
                {
                    string x=st.top();
                    st.pop();
                    int y=stoi(x)+1;
                    x=to_string(y);
                    st.push(x);
                }
            else{
                st.push("1");
            }
        }
        else if(s[i]==')' && isdigit(st.top()[0]))
        {
            string x=st.top();
            st.pop();
            st.pop();
            int y=stoi(x)*2;
       
            if(!st.empty() && isdigit(st.top()[0]))
            {
                string z=st.top();
                st.pop();
                int a=stoi(z);
                y=y+a;
                x=to_string(y);
                st.push(x);
            }
            else{
                x=to_string(y);
                st.push(x);
            }
             
            
        }
        
        
    }
        
        return stoi(st.top());
    }
        
};