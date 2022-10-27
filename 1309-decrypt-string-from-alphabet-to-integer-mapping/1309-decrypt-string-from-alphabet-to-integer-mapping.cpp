class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(i<s.size()-1 and s[i+2]=='#'){
                string temp;
                temp+=s[i];
                temp+=s[i+1];
                int num=stoi(temp);
                ans+=(char)(num+96);
                i+=2;
            }
            else
               ans+=(char)((s[i]-'0')+96); 
            
                
        }
        return ans;
    }
};