//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    // Function to count paths between two vertices in a directed graph.
    
    
    void dfs(int node,vector<int>adj[],int des,int &c,vector<bool>&vis)
    {
        if(node==des){
            c++;
            vis[des]=false;
            return;
        }
        vector<int>temp=adj[node];
        for(auto it:temp)
        {
            if(!vis[it])
            {
                vis[it]=true;
                dfs(it,adj,des,c,vis);
                
            }
                
        }
        vis[node]=false;
        
    }
    int countPaths(int V, vector<int> adj[], int src, int des) {
        // Code here
        int c=0;
        vector<bool>vis(V+1,false);
        
                vis[src]=true;
                dfs(src,adj,des,c,vis);
            
        
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}
// } Driver Code Ends