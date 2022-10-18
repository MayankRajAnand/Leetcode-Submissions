class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mp;
        for(const auto & x : strs){
            string tmp = x;
            sort(tmp.begin(), tmp.end());
            mp[tmp].push_back(x);
        }
        vector<vector<string>> ans;
        for(const auto & x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};