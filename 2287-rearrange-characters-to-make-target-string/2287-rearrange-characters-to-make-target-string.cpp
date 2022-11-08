class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> st,m;
        for(auto it:target)
            st[it]++;
        for(auto it:s)
        {   
            if(st.find(it)!=st.end())
                m[it]++;
        }
        for(auto it:st)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        cout<<endl;
        for(auto it:m)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        int mini=INT_MAX;

        for(auto it:st)
        {
            cout<<m[it.first]<<" ";
            mini=min(mini,m[it.first]/st[it.first]);
        }
        return mini;
    }
};