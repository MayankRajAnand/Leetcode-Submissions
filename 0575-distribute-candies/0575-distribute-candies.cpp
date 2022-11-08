class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>m;
        for(auto it:candyType)
            m[it]++;
        int c=0;
        for(auto it:m)
        {
            if(c<candyType.size()/2)
                c++;
        }
        return c;
    }
};