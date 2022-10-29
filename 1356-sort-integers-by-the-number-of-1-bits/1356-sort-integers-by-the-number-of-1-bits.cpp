class Solution {
public:
   static int fun(int n)
    {
        int c=0;
        while(n)
        {
            int rsb= n & -n;
            n-=rsb;
            c++;
        }
        return c;
    }
    static bool comp(int a,int b)
    {
        if(fun(a)==fun(b))
            return a<b;
        
        return fun(a)<fun(b);
            
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};