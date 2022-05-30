class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>v;
        for(int i=0;i<boxes.size();i++)
        {
            int c=0;
            for(int j=0;j<boxes.size();j++)
            {
                if(boxes[j]=='1')
                {
                    c+=abs(i-j);
                }
            }
            v.push_back(c);
        }
        return v;
    }
};