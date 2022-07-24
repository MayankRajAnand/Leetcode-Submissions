class Solution {
public:
    string getPermutation(int n, int k) {
        
        vector<int>v;
        long long int fact=1;
        for(int i=1;i<n;i++)
        {
            v.push_back(i);
            fact*=i;
        }
        v.push_back(n);
        string ans;
        k--;
        while(true)
        {
            ans+=to_string(v[k/fact]);
            v.erase(v.begin()+k/fact);
            if(v.size()==0)
                break;
            k=k%fact;
            fact=fact/v.size();
        }
        return ans;
    }
};