class Solution {
public:
    int countOdds(int low, int high) {
        int n=high-low+1;
        if(high%2==1 and low%2==1)
            return n/2+1;
        return n/2;
    }
};