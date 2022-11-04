class Solution {
public:
    string reverseStr(string s, int k) 
{
    string ans;
    int i=0;
    int n=s.size();
    string temp="";
    while(i<n)
    {
        temp="";
        int j=i;
        while(i<j+k)
        {
            temp=s[i]+temp;
            i++;
            if(i==n)return ans+temp;
        }
        ans+=temp;
        j=i;
        while(i<j+k)
        {
            ans+=s[i];
            i++;
            if(i==n)return ans;
        }
    }
    
    return ans;
    
}
};