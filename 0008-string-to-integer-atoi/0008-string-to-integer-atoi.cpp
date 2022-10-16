class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(s[i]==' ')
            i++;
        int pos=1;
        if(s[i]=='-')
        {
            pos=-1;i++;
        }
        else if(s[i]=='+')
        {
            pos=1;i++;
        }
        if(isalpha(s[i]))
            return 0;
        long num=0;      
        while(isdigit(s[i]))
        {
            num=num*10+s[i]-'0';
            i++;
            if(num!=(int)num)
                return (pos==-1)?INT_MIN :INT_MAX; 
        }
        if(num==(int)num)
            return num*pos;
        return -1;
       
    }
};