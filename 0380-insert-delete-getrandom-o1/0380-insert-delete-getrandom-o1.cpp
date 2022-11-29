class RandomizedSet {
public:
    unordered_set<int>s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        bool flag=true;
        if(s.find(val)!=s.end())
            flag=false;
        s.insert(val);
        return flag;
    }
    
    bool remove(int val) {
        if(s.find(val)==s.end())
            return false;
        s.erase(val);
        return true;
    }
    
    int getRandom() {
        auto it = s.begin();
        int random = rand() % s.size();
        advance(it,random);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */