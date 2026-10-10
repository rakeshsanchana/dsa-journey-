class Solution {
public:
    int dfs(vector<vector<int>>& grid,vector<vector<int>>&vis,int i,int j,int n,int m){
        if(i>=n || j>=m ||i<0 || j<0 || grid[i][j]==0 || vis[i][j]) return 0;
        vis[i][j]=1;
        int count=1;
        count+=dfs(grid,vis,i-1,j,n,m);
        count+=dfs(grid,vis,i+1,j,n,m);
        count+=dfs(grid,vis,i,j-1,n,m);
        count+=dfs(grid,vis,i,j+1,n,m);
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    int count=dfs(grid,vis,i,j,n,m);
                    ans=max(ans,count);
                }
            }
        }
        return ans;
    }
};