class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int ans=0;
        int n=img1.size();
        int m=img1[0].size();
        for(int i=-n+1;i<n;i++)
        {
            for(int j=-m+1;j<m;j++)
            {
                ans=max(ans,overlap(img1,img2,i,j));
            }
        }
        return ans;
    }
    
    int overlap(vector<vector<int>>& img1, vector<vector<int>>& img2,int rowoff,int coloff)
    {
        int c=0;
        int n=img2.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i+rowoff>=0 and j+coloff>=0 and i+rowoff<n and j+coloff<n){
                    if(img1[i+rowoff][j+coloff]+img2[i][j]==2)
                        c++;
                }
                
            }
        }
        return c;
    }
};