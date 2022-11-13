class Solution {
public:
    long long next(long long n,long long b)
    {
        n=n/b;
        n=n+1;
        n=n*b;
        return n;
    }
    long long sumOfDigit(long long n)
    {
        long long sum=0;
        while(n)
        {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long b=1;
        long long ans=n;
        while(sumOfDigit(n)>target)
        {
            b=b*10;
            n=next(n,b);
        }
        return n-ans;
        
    }
};