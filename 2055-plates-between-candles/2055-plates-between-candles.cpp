class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n=s.size();
        vector<int>op(n,-1);
        vector<int>cl(n,-1);
        vector<int>count(n,0);
        int h=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
                op[i]=h;
            else{
                h=i;
                op[i]=h;
            }
        }
        h=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='*')
                cl[i]=h;
            else{
                h=i;
                cl[i]=h;
            }
        }
        if(s[0]=='*')count[0]=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='*')
                count[i]=count[i-1]+1;
            else
                count[i]=count[i-1];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            int left=queries[i][0];
            int right=queries[i][1];
            
            int ntl=cl[left];
            int ntr=op[right];
            if(ntr>=left and ntr<=right and  ntl<=right and ntl>=left){
                int c=count[ntr]-count[ntl];
                ans.push_back(c);
            }else
                ans.push_back(0);
        }
        return ans;
    }
};