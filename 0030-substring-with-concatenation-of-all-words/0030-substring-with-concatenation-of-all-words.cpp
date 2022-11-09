class Solution {
public:
    bool satisfies(int ind,string s,unordered_map<string,int>m,int n,int tot){
    int c=0;
    for(int i=ind;i<s.size();i+=n)
    {
        string temp=s.substr(i,n);
        // cout<<temp<<" ";
        if(m[temp]<=0)return false;
        else m[temp]--;
        c++;
        if(c==tot)
            return true;
    }
    return false;
}
vector<int> findSubstring(string s, vector<string>& words) {
    unordered_map<string,int>m;
    for(auto it:words)
        m[it]++;
    int n=words[0].size();
    int tot=words.size();
    int size=s.size();
    vector<int>ans;
    for(int i=0;i<size-(n*tot)+1;i++)
    {
        if(satisfies(i,s,m,n,tot))
            ans.push_back(i);
            
    }
    return ans;
    
}
};