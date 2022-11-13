class Solution {
public:
    string func(string s,int k)
    {
        if(s.size()<=k)return s;
        int i=0;
        int n=s.size();
        string ans="";
        int temp=0;
        while(i<n)
        {
            if(i!=0 and i%k==0)
            {
                ans=ans+to_string(temp);
                temp=s[i]-'0';
            }
            else{
                temp+=(s[i]-'0');

            }
            i++;
        }
        ans+=to_string(temp);
        return func(ans,k);
        
    }
    string digitSum(string s, int k) {
        
        return func(s,k);
    }
};