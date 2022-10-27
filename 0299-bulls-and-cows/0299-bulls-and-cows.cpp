class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>m1,m2,m3;
    for(auto it:secret)
    {
        m1[it]++;
    }
    
    for(auto it:guess)
    {
        m2[it]++;
    }
    int tot=0;
    for(auto it:secret)
    {
        m3[it]=min(m1[it],m2[it]);
    }
    for(auto it:m3)
    {
        tot+=it.second;
    }
    int cow=0,bull=0;
    for(int i=0;i<guess.size();i++)
    {
        if(m3[guess[i]]>0 and (guess[i]==secret[i]))
        {
            m3[guess[i]]--;
            bull++;
        }
        
    }
    cow=tot-bull;
    string ans;
    ans+=to_string(bull);
    ans+="A";
    ans+=to_string(cow);
    ans+="B";
    return ans;
    }
};