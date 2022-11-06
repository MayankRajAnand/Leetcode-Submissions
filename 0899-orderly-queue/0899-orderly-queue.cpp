class Solution {
public:
    string orderlyQueue(string s, int k) {
        string temp=s;
        string mini=s;

        if(k==1){
            for(int i=0;i<s.size();i++){
              char x=temp[0];
              temp.erase(temp.begin()+0);
              temp.push_back(x);
              if(temp.compare(mini)<0)
                  mini=temp;
            }  
            return mini; 
        }
        sort(s.begin(),s.end());
        return s;
    }
};