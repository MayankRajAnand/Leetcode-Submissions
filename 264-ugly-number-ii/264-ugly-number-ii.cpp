class Solution {
public:
    int nthUglyNumber(int n) {
       queue<long long int>q1,q2,q3;
        q1.push(2);
        q2.push(3);
        q3.push(5);
        
        long long int c=1;
        long long int mini=1;
        while(c<n)
        {
            mini=min(q1.front(),min(q2.front(),q3.front()));            
            if(mini==q1.front())q1.pop();                
            if(mini==q2.front())q2.pop();
            if(mini==q3.front())q3.pop();

            q1.push(2*mini);
            q2.push(3*mini);
            q3.push(5*mini);
            cout<<mini<<endl;
            c++;
            
        }
        return (int)mini;
    }
};