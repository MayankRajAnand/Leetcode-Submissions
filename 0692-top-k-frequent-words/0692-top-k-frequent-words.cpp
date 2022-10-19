class cmp
{
  public:
    bool operator() (pair<int,string>& p1, pair<int,string>& p2)
    {
        if(p1.first==p2.first)
            return p1.second>p2.second;
        return p1.first<p2.first;
    }
};


class Solution {
public:
    
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        int n = words.size();
        
        unordered_map<string,int> mp;
        
        for(auto& word : words)
            mp[word]++;
        
        priority_queue<pair<int,string>,vector<pair<int,string> >,cmp> pq;
        
        for(auto it = mp.begin();it!=mp.end();++it)
            pq.push({it->second,it->first});
        
        vector<string> ans;
        
        for(int i=0;i<k;i++)
        {
            auto [_,s] = pq.top();
            pq.pop();
            ans.push_back(s);
        }
        
        return ans;
    }
};