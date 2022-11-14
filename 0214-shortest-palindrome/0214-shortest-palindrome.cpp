class Solution {
public:
    vector<int> LPS(string s)
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
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}
string shortestPalindrome(string s) 
{
    string temp=s;
    reverse(temp.begin(),temp.end());
    string lp="";
    lp+=s+'#'+temp;
    cout<<lp<<endl;
    vector<int>lps=LPS(lp);
    int n=lps[lp.size()-1];
    

    string toadd=s.substr(n);
    reverse(toadd.begin(),toadd.end());
    string ans=toadd+s;
    return ans;
    
}
};