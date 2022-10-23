class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cord) {
        int flag=0;
        double a=0.0;
        if(cord[1][0]-cord[0][0]==0)
            flag=1;
        else
            a=(double)(cord[1][1]-cord[0][1])/(cord[1][0]-cord[0][0]);
        
        for(int i=2;i<cord.size();i++)
        {
            if(flag==1 and cord[i][0]-cord[i-1][0]!=0)
                return false;
            else if(cord[i][0]-cord[i-1][0]==0  and flag==0)
                return false;
            else if(cord[i][0]-cord[i-1][0]==0  and flag==1)continue;
            else 
            {
                double temp=(double)(cord[i][1]-cord[i-1][1])/(cord[i][0]-cord[i-1][0]);
                if(temp!=a)
                    return false;
            }
                
        }
        return true;
        
    }
};