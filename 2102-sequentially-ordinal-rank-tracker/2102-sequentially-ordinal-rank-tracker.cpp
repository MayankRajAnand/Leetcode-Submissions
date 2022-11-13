class sorted{
    public:
    bool operator()(pair<string,int>a ,pair<string,int>b)
    {
        if(a.second==b.second)
            return a.first>b.first;
        return a.second<b.second;
    }
};

class revsorted{
    public:
    bool operator()(pair<string,int>a ,pair<string,int>b)
    {
        if(a.second==b.second)
            return a.first<b.first;
        return a.second>b.second;
    }
};
class SORTracker {
    int c=1;
public:
    
    priority_queue<pair<string,int> , vector<pair<string,int>> , sorted>maxi;
    priority_queue<pair<string,int> , vector<pair<string,int>> , revsorted>mini;
    SORTracker() {
    }
    
    void add(string name, int score) {
        mini.push({name,score});
        if(mini.size()>c)
        {
            auto it=mini.top();
            mini.pop();
            maxi.push(it);
        }
    }
    
    string get() {
        if(mini.size()==0)return "";
        auto it=mini.top();
        if(maxi.size()!=0){
            mini.push(maxi.top());
            maxi.pop();
        }
        c++;
        return it.first;
        
    }
};

/**
 * Your SORTracker object will be instantiated and called as such:
 * SORTracker* obj = new SORTracker();
 * obj->add(name,score);
 * string param_2 = obj->get();
 */