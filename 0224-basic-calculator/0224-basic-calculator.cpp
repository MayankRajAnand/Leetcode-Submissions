class Solution {
public:
    int calculate(string s) {
        int ans=0,sign=1;
        stack<int> stk;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ') continue;

            if(isdigit(s[i]))
            {
                 int temp=0;
                 while(i<s.length() && isdigit(s[i]))
                 {
                     temp =temp* 10 +(s[i]-'0');
                     i++;
                 }       
                 i--;
                 ans += temp*sign;   
            }
            else if(s[i]=='+') sign=1;
            else if(s[i]=='-') sign=-1;
            else if(s[i]=='('){
                stk.push(ans);
                stk.push(sign);
                //reset sign & result
                ans = 0 ;
                sign = 1;
            }
            else{
                ans *= stk.top();
                stk.pop();
                ans += stk.top();
                stk.pop();
            }

        }
        return ans;
    }
};