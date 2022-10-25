class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr){
        int n=arr.size();
        int sum=0;
        for(auto it:arr)
        {
            sum+=it;
        }
        if(n<=2)
            return sum;
        int odd=0;
        if(n%2==1)
            odd=n;
        else
            odd=n-1;
        vector<int>pre;
        pre.push_back(0);
        for(int i=0;i<arr.size();i++)
        {
            pre.push_back(pre[i]+arr[i]);
        }

        for(int i=0;i<pre.size();i++){
            for(int k=3;k<=odd;k+=2)
            {
                if(i-k>=0)
                {
                    sum+=pre[i]-pre[i-k];
                }
            }
        }
        return sum;
    }
};