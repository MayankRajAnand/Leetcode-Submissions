class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int,int>m;
    for(int i=0;i<items1.size();i++)
    {
        if(m.find(items1[i][0])==m.end())
            m[items1[i][0]]=items1[i][1];
        else
            m[items1[i][0]]=m[items1[i][0]]+items1[i][1];
    }
    
    for(int i=0;i<items2.size();i++)
    {
        if(m.find(items2[i][0])==m.end())
            m[items2[i][0]]=items2[i][1];
        else
            m[items2[i][0]]=m[items2[i][0]]+items2[i][1];
    }
        
        vector<vector<int>>ans;
        for(auto it:m)
        {
            vector<int>temp(2,0);
            temp[0]=it.first;
            temp[1]=it.second;
            ans.push_back(temp);
        }
        sort(ans.begin(),ans.end());
        return ans;
            
    }
};