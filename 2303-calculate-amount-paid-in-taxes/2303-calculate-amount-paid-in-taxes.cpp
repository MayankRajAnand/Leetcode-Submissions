class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double tot=0.0;
        for(int i=0;i<brackets.size();i++)
        {
            int mini=INT_MAX;
            if(i==0)
            {
                 mini=min(income,brackets[0][0]);                
            }
            else{
              mini=min(income,(brackets[i][0]-brackets[i-1][0]));  
            }
            tot+=mini*brackets[i][1]/100.0;
            income-=mini;            
               
        }
        return tot;
    }
    
};