class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>s;
        for(auto it:deadends)
            s.insert(it);
        unordered_set<string>vis;
        queue<pair<string,int>>q;
        if(s.find("0000")!=s.end())
            return -1;
        q.push({"0000",0});
        vis.insert("0000");
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            
            string temp=it.first;
            int count=it.second;
            
            if(temp==target)
                return count;
            for(int i=0;i<4;i++)
            {
                string temp1,temp2;
                temp1=temp.substr(0,i)+to_string((temp[i]-'0'+1)%10) +temp.substr(i+1);
                temp2=temp.substr(0,i)+to_string((temp[i]-'0'-1+10)%10) +temp.substr(i+1);
                
                if(s.find(temp1)==s.end() and vis.find(temp1)==vis.end())
                {
                    q.push({temp1,count+1});
                    vis.insert(temp1);
                }
                
                if(s.find(temp2)==s.end() and vis.find(temp2)==vis.end())
                {
                    q.push({temp2,count+1});
                    vis.insert(temp2);
                }
                
            }
            
        }
        return -1;
    }
};