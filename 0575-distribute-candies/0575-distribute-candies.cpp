class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>m;
        for(auto it:candyType)
            m[it]++;
        int c=0;
        int n=candyType.size()/2;
        for(auto it:m)
        {
            if(c<n)
                c++;
        }
        return c;
    }
};