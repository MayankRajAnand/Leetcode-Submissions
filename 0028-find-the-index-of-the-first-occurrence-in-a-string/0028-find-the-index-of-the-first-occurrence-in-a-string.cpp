class Solution {
public:
    vector<int>LPS(string s)
    {
        int n=s.size();
        vector<int>lps(n,0);
        int i=1;
        int len=0;
        while(i<n)
        {
            if(s[i]==s[len])
            {
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0)
                    len=lps[len-1];
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps;
    }
    int strStr(string haystack, string needle) {
        string temp=needle+'#';
        temp=temp+haystack;
        int n=needle.size();
        int res=-1;
        vector<int>ans=LPS(temp);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        for(int i=0;i<temp.size();i++)
        {
            if(ans[i]==n){
                res=i;
                break;
            }
                
            
        }
        if(res==-1)return -1;
        else
            return res-(2*needle.size());
    }
};