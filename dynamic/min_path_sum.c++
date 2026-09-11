class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>dp(n,vector<int>(grid[0].size()));
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[0].size();j++){
                if(i==0 && j==0) dp[i][j]=grid[i][j];
                else{
                    int upsum=INT_MAX,rightsum=INT_MAX;
                    if(i>0) upsum=dp[i-1][j];
                    if(j>0) rightsum=dp[i][j-1];
                    dp[i][j]=grid[i][j]+min(upsum,rightsum);
                }
            }
        }
        return dp[n-1][grid[0].size()-1];
    }
};