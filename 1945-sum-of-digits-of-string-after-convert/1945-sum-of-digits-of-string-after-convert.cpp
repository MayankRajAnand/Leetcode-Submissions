class Solution {
public:
    int func(int sum,int k)
    {
        if(k==0)
            return sum;
        int tot=0;
        while(sum)
        {
            tot+=sum%10;
            sum/=10;
        }
        return func(tot,k-1);
        
    }
    int getLucky(string s, int k) {
        int sum=0;
        for(auto it:s)
        {
            int temp=(it-'a'+1);
            if(temp>9)
            {
                sum+=temp%10;
                temp/=10;
                sum+=temp%10;
            }
            else
                sum+=temp;
        }
        if(k==1)
            return sum;
        return func(sum,k-1);
    }
};