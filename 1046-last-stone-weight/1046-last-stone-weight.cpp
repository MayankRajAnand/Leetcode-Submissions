class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto it:stones)
        {
            pq.push(it);
        }
        if(stones.size()==0)return 0;
        while(pq.size()!=1)
        {
            int a=pq.top();pq.pop();
            int b=pq.top();pq.pop();
            
            if(a!=b)pq.push(abs(a-b));
            else pq.push(0);
        }
        return pq.top();
    }
};