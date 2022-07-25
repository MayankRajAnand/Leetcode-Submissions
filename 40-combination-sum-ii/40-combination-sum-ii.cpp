class Solution {
public:
    void func(int ind,vector<int>& can, int k,vector<vector<int>>&ans,vector<int>&v)
    {
        if(k==0)
        {
           ans.push_back(v);
            return;
        }
            
        if(k<0 or ind==can.size())
            return ;
        for(int i=ind;i<can.size();i++)
        {
           
            if(i>ind and can[i]==can[i-1])continue;
            if(can[i]>k)break;
             v.push_back(can[i]);
            func(i+1,can,k-can[i],ans,v);
            v.pop_back();
            
        }
    }
    

    vector<vector<int>> combinationSum2(vector<int>& can, int k) {
        sort(can.begin() , can.end());
        vector<vector<int>>result ;
        vector<int>output ;
        int index =0;
        func(0,can,k,result,output);

        return result;
    }
};