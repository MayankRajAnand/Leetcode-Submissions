class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       int n=arr.size();
    vector<int>ans;
    if(n==0)return ans;
    if(n==1)
    {
        ans.push_back(1);
        return ans;
    }
    vector<int>temp=arr;
    sort(temp.begin(),temp.end());
    map<int,int>m;
    m[temp[0]]=1;
    int j=2;
    for(int i=1;i<temp.size()-1;i++)
    {
        if(m.find(temp[i])==m.end() and temp[i]!=temp[i+1])
        {
            m[temp[i]]=j;
            j++;
        }
    }
    if(m.find(temp[n-1])==m.end())
        m[temp[n-1]]=j;
    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    for(auto it:arr)
    {
        ans.push_back(m[it]);
    }
    return ans;
    }
};