// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    void dfs(int src,vector<int> adj[],vector<int>& visited,int c,int d)
    {

        visited[src]=1;
        for(auto x:adj[src])
        {
            if((src==c&&x==d)||(src==d||x==c))
            continue;
          if(!visited[x])

             dfs(x,adj,visited,c,d);

        }

    }
    int isBridge(int V, vector<int> adj[], int c, int d)
    {
        // Code here
        //vector<int> adjnew[V];
        vector<int> visited(V,0);
       dfs(c,adj,visited,c,d);
       if(!visited[d])
       return 1;
        return 0;
    }

};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }

        int c,d;
        cin>>c>>d;

        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
