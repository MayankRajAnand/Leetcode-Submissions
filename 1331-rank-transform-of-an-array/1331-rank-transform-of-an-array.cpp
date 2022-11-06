class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans;
        set<int>s;
        for(auto it:arr)
        {
            s.insert(it);
        }
        int i=1;
        unordered_map<int,int>m;
        for(auto it:s)
        {
            m[it]=i;
            i++;
        }
        for(auto it:arr)
        {
            ans.push_back(m[it]);
        }
        return ans;
    }
};