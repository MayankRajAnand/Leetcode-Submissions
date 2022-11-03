class Solution {
public:
    void helper(int ind,string x,vector<string>&ans,string digits,vector<string>&map)
{
    if(ind==digits.size())
    {
        ans.push_back(x);
        return;
    }
    
    for(auto it:map[digits[ind]-'0'])
    {
        x.push_back(it);
        helper(ind+1,x,ans,digits,map);
        x.pop_back();
    }
        
    
}

vector<string> letterCombinations(string digits) 
{
    vector<string>ans;
    if(digits.size()==0) return ans;
    
    int ind=0;
    vector<string>map{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string x="";
    helper(ind,x,ans,digits,map);
    return ans;
}
};