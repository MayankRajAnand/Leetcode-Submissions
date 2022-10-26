class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0,sum2=0;
        for(auto it:s)
        {
            sum1+=it;
        }
        for(auto it:t)
        {
            sum2+=it;
        }
        return (char)(sum2-sum1);
    }
};