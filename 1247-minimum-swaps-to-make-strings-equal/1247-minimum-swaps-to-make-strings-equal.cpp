class Solution {
public:
    int minimumSwap(string s1, string s2) {
        if(s1.size()!=s2.size())return -1;
        int c1=0,c2=0;
        int n=s1.size();
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='x' and s2[i]=='y')
                c1++;
            if(s1[i]=='y' and s2[i]=='x')
                c2++;
        }
        if((c1%2==0 and c2%2 ==0) or (c1%2==1 and c2%2==1))
            return c1/2 +c2/2 + (c1%2) +(c2%2);
        return -1;
    }
};