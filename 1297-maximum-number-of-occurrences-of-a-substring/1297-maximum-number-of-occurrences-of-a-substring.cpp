class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int maxi=0;
        unordered_map<string,int> mp;
        
        for(int i=0;i<s.size()-minSize+1;i++){
            string temp=s.substr(i,minSize);
           unordered_set<char> st(temp.begin(),temp.end());
            if(st.size()<=maxLetters){
                mp[temp]++;
                maxi=max(maxi,mp[temp]);
            }  
        }
        
        return maxi;
    }
};