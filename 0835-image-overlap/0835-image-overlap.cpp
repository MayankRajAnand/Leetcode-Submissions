class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int ans=0;
        int n=img1.size();
        for(int i=-n+1;i<n;i++)
        {
            for(int j=-n+1;j<n;j++)
            {
                ans=max(ans,overlap(img1,img2,i,j));
            }
        }
        return ans;
    }
    
    int overlap(vector<vector<int>>& img1, vector<vector<int>>& img2,int rowoff,int coloff)
    {
        int c=0;
        int n=img1.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i+rowoff<0 or j+coloff<0 or i+rowoff>=n or j+coloff>=n)continue;
                
                if(img1[i][j]+img2[i+rowoff][j+coloff]==2)
                    c++;
                
            }
        }
        return c;
    }
};