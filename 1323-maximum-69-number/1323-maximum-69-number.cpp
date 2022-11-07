class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        string ans;
        bool isFirst=true;
        for(auto it:s)
        {
            if(it=='6' and isFirst){
                ans+='9';
                isFirst=false;
            }
            else
                ans+=it; 
        }
        return stoi(ans);
        
    }
};