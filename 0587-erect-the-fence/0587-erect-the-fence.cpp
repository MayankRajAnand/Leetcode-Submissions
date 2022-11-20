class Solution {
public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        sort(trees.begin(), trees.end());
        vector<vector<int>> up, low;
        for(auto p : trees){
            while(up.size()>=2 && cross(up[up.size()-2], up.back(), p) > 0)
                up.pop_back();
            up.push_back(p);
            while(low.size()>=2 && cross(low[low.size()-2], low.back(), p) < 0)
                low.pop_back();
            low.push_back(p);
        }
        up.insert(up.end(), low.begin(), low.end());
        set<vector<int>> set(up.begin(), up.end());
        return vector<vector<int>>(set.begin(), set.end());
    }
    int cross(vector<int>& a, vector<int>& b, vector<int>& c){
        return (c[0]-a[0])*(b[1]-a[1]) - (b[0]-a[0])*(c[1]-a[1]);
    }
};