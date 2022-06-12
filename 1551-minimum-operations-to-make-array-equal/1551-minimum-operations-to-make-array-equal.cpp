class Solution {
public:
    int minOperations(int n) {
        if(n==1)
            return 0;
        else{
            int ans=0;
            for(int i=1;i<=n;i+=2)
            {
                ans+=n-i;
            }
            return ans;
        }
        return -1;
    }
};