class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int,int>m1,m2;
        
        for(auto it:s)
        {
            m1[it]++;
        }
        for(auto it:t)
        {
            m2[it]++;
        }
        
        for(auto it:s)
        {
          if(m2.find(it)!=m2.end())
          {
              if(m1[it]>0 and m2[it]>0)
              {
                  m1[it]--;
                  m2[it]--;
              }
          }
            
        }
        int c=0;
        for(auto it:m1)
        {
            c+=it.second;
        }
        for(auto it:m2)
            c+=it.second;
        return c;
    }
};