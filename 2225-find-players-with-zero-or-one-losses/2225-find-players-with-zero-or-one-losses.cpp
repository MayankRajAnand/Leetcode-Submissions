class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_set<int>total;
        unordered_map<int,int>loss;
        
        for(int i=0;i<matches.size();i++)
        {
            total.insert(matches[i][0]);
            total.insert(matches[i][1]);
            
            loss[matches[i][1]]++;
            
        }
        
        vector<int>zero;
        vector<int>one;
        vector<vector<int>>ans;
        for(auto it:total)
        {
            if(loss.find(it)==loss.end())
                zero.push_back(it);
            else if(loss[it]==1)
                one.push_back(it);
        }
        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());
        ans.push_back(zero);
        ans.push_back(one);
        return ans;
    }
};