class Solution {
public:
    bool isHappy(int n) {
        if(n==1 or n==7)
            return true;
        if(n<10)return false;
        long long sum=0;
        while(n)
        {
            int temp=n%10;
            sum+=(temp*temp);
            n/=10;
        }
        if(sum==1)return true;
        return isHappy(sum);
    }
};