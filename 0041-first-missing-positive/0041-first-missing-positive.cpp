class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            if(v[i]>=1 and v[i]<=n)
            {
                int el=v[i];
                int pos=el-1;
                if(v[pos]!=el)
                {
                    swap(v[i],v[pos]);
                    i--;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(v[i]!=i+1)
                return i+1;
        }
        return n+1;
    }
};