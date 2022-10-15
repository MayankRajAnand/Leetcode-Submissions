class Solution {
public:
    int reverse(int x) {
        
        long ans=0;
        while(x)
        {
            int rem=x%10;
            ans=ans*10+rem;
            x/=10;
        }
        if(ans==(int)ans)
            return ans;
        return 0;
    }
};