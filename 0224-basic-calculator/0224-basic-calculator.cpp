class Solution {
public:
    int calculate(string s) {
        int ans=0;
        long long curr_val=0;
        int sign =1;
        stack<long long>st;
        for(auto it:s)
        {
            if(isdigit(it))
            {
                curr_val=curr_val*10 +(it-'0');
            }
            else if(it=='+')
            {
                ans+=curr_val*sign;
                curr_val=0;
                sign=1;
            }
            else if(it=='-')
            {
                ans+=curr_val*sign;
                curr_val=0;
                sign=-1;
            }
            
            else if(it=='(')
            {
                st.push(ans);
                st.push(sign);
                sign=1;
                ans=0;
            }
            else if(it==')')
            {
                ans+=curr_val*sign;
                curr_val=0;
                ans=ans*st.top();
                st.pop();
                
                ans+=st.top();
                st.pop();
            }
        }
        ans+=curr_val*sign;
        return ans;
        
    }
};