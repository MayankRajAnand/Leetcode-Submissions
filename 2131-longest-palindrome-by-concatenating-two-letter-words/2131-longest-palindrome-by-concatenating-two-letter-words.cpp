class Solution {
public:
bool isPalindrome(string s)
{
    string t=s;
    reverse(s.begin(),s.end());
    return (s==t);
}
int longestPalindrome(vector<string>& words) {
    unordered_map<string,int>m;
    int maxi=0;
    int ans=0;
    for(auto it:words)
    {
        m[it]++;
    }
    
    for(auto it:words)
    {
        string temp=it;
        reverse(temp.begin(),temp.end());
        if(isPalindrome(it) and m[it]>0)
        {
            int n=m[it];
            if(n%2==0)
            {
                ans+= n*it.size();
            }
            
            else{
                ans+= (n-1)*it.size();
                int size=it.size();
                maxi=max(maxi, size);
                
            }
           
            m[it]=0;
            
        }
        else if (m[temp]>=1 and m[it]>=1)
        {
           
            ans+= it.size()+it.size();
            m[it]--;
            m[temp]--;
        }
    }
    return ans+maxi;
}
};