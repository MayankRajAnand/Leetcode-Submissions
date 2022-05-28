class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        
        while(num)
        {
            int x=num%10;
            v.push_back(x);
            num/=10;
        }
        
        sort(v.begin(),v.end());
        
        int num1=0;
        int num2=0;
        for(int i=0;i<v.size();i+=2)
        {
            if(v[i]==0)
                continue;
            num1=num1*10+v[i];
        }
        for(int i=1;i<v.size();i+=2)
        {
            if(v[i]==0)
                continue;
            num2=num2*10+v[i];
        }
        
        return num1+num2;
    }
};