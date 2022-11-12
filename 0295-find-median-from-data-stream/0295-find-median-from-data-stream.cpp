class MedianFinder {
public:
    priority_queue<int>maxi;
    priority_queue<int,vector<int>,greater<int>>mini;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int n1=maxi.size();
        int n2=mini.size();
        if(n1==0 and n2==0)
            maxi.push(num);
        else if(n1-n2>=1)
        {
            if(num>=maxi.top())
                mini.push(num);
            else{
                mini.push(maxi.top());
                maxi.pop();
                maxi.push(num);
            }
            
        }
        else{
            if(mini.top()>=num)
            {
                maxi.push(num);
            }
            else{
                maxi.push(mini.top());
                mini.pop();
                mini.push(num);
            }
            
        }
    }
    
    double findMedian() {
        int n1=maxi.size();
        int n2=mini.size();
        
        if(n1==n2)
        {
            int a=maxi.top();
            int b=mini.top();
            return (double)((a+b)/2.0);
        }
        else{
            return maxi.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */