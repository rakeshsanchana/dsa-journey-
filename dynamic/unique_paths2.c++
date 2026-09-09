class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size()));
        if(obstacleGrid[0][0]==1) return 0;

        for(int i=0;i<obstacleGrid.size();i++){
            for(int j=0;j<obstacleGrid[0].size();j++){
                if(i==0 && j==0) dp[i][j]=1;
                else{
                    int up=0,right=0;
                    if(obstacleGrid[i][j]!=1){
                    if(i>0) up=dp[i-1][j];
                    if(j>0) right=dp[i][j-1];
                    dp[i][j]=up+right;
                    }
                }
            }
        }
        return dp[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
};