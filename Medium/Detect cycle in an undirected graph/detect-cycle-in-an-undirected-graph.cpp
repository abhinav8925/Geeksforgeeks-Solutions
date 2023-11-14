//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    
    // using BFS
    bool detect(int src,vector<int> adj[],vector<bool> &vis){
        
        vis[src] = true;
        
        queue<pair<int,int>> q;
        q.push({src,-1});
        
        while(!q.empty()){
            int node = q.front().first;
            int par = q.front().second;
            
            q.pop();
            
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it] = true;
                    q.push({it,node});
                }
                else if(it!=par)
                    return true;
            }
        }
        return false;
    }
    
    // using DFS
    
    
    bool detect(int node, int par,vector<bool> &vis,vector<int> adj[]){
        vis[node] = true;
        
        for(auto it:adj[node]){
            if(!vis[it]){
                if(detect(it,node,vis,adj))
                    return 1; 
            }
            else if(it!=par){
                return  1;
            }
        }
        return 0;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        vector<bool> vis(V,false);
        
        // for(int i=0;i<V;i++){
        //     if(!vis[i]){
        //          if(detect(i,adj,vis))
        //              return 1;
        //     }
            
        // }
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detect(i,-1,vis,adj))
                    return 1;
            }
        }
        
        return 0;
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
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends