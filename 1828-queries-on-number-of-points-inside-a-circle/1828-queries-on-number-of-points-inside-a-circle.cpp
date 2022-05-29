class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>v;
        for(int i=0;i<queries.size();i++)
        {
            int c=0;
            for(int j=0;j<points.size();j++)
            {
                if(pow(queries[i][0]-points[j][0],2)+pow(queries[i][1]-points[j][1],2)<=pow(queries[i][2],2))
                    c++;
            }
             v.push_back(c);
        }
       
        return v;
    }
};