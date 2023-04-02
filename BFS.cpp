//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {

        int i=0;
        vector<bool>vis(V, false);
        vector<int> ans;

          if(vis[i] == 0) {   // !vis[i]
          
              queue<int> q;
              vis[i] = true;
              q.push(i);
              
              while(!q.empty()) {
                  
                   int f_node = q.front();
                   q.pop();
                   ans.push_back(f_node);
                   
                   for(auto i : adj[f_node]) {
                       if(vis[i] == 0) {
                           vis[i] = true;
                           q.push(i);
                       }
                   }
              }
              
          }
          
        return ans;
    }
};



int main() {

        int V, E;
        cout << "Enter V and E " << endl;
        cin >> V >> E;

        vector<int> adj[V];
        
        cout << "Enter the value of u and v : " << endl;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;

    return 0;
    }

