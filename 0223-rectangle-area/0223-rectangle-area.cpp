class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1=(ax2-ax1)*(ay2-ay1);
        int area2=(bx2-bx1)*(by2-by1);
        
        int common=0;
        int left =max(ax1,bx1);
        int right = min(ax2,bx2);
        int top =min(ay2,by2);
        int down = max(ay1,by1);
        
        if(left<right && down<top)
        {
            common =(right-left)*(top-down);
        }
        
        return area1+area2-common;
    }
};