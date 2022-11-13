class Solution {
public:
    int countEven(int num) {
        int c=0;
        for(int i=2;i<=num;i++)
        {
            if(i<10 and i%2==0)c++;
            else{
                int temp=i;
                int sum=0;
                while(temp)
                {
                    sum+=temp%10;
                    temp/=10;
                }
                if(sum%2==0)c++;
            }
        }
        return c;
    }
};