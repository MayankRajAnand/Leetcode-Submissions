
class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size();
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back({growTime[i],plantTime[i]});
    }
    sort(v.rbegin(),v.rend());
    
   
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=v[i].second;
        int bloom=v[i].first;
        while(i<n-1 and bloom>v[i+1].second)
        {
            
            ans+=v[i+1].second;
            bloom-=v[i+1].second;
            bloom=max(bloom,v[i+1].first);
            
            i++;
        }
        if(i==n-1){
            ans+=bloom;
        }
        
        
    }
        return ans;
    }
};