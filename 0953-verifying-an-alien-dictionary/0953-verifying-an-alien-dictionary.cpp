class Solution {
public:
    bool check(string a,string b,unordered_map<char,int>&m)
    {
        int flag=0;
        for(int i=0;i<min(a.size(),b.size());i++)
        {
            if(m[a[i]]>m[b[i]]){
                flag=1;
                break;
            }
            else if(m[a[i]]<m[b[i]])
            return true;
        }
        if(flag==1 or (flag==0 and a.size()>b.size()))
            return false;
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>m;
        for(int i=0;i<order.size();i++)
        {
            m[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++)
        {
            if(check(words[i],words[i+1],m)==false)
                return false;
        }
        return true;
    }
};