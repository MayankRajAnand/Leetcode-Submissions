class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>store;
        vector<int>temp={1};
        store.push_back(temp);
        for(int i=1;i<=rowIndex;i++)
        {
            vector<int>v;
            v.push_back(1);
            for(int j=1;j<i;j++)
            {
                v.push_back(store[i-1][j-1]+store[i-1][j]);
            }
            v.push_back(1);
            store.push_back(v);
        }
        vector<int>ans=store[rowIndex];
        return ans;
    }
};