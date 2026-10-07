class Solution {
  public:
    int countConnected(int V, vector<vector<int>>& edges) {
        int count=0;
        vector<vector<int>>adj(V);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        int vis[V]={0};
        queue<int>q;
        for(int i=0;i<V;i++){
        if(!vis[i]){
            count++;
            vis[i]=1;
            q.push(i);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        }
        }
        return count;
    }
};