class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    dp[i][j]=matrix[i][j];
                }
                else if(j==0) dp[i][j]=matrix[i][j]+min(dp[i-1][j+1],dp[i-1][j]);
                else if(j==n-1) dp[i][j]=matrix[i][j]+min(dp[i-1][j-1],dp[i-1][j]);
                else{
                    dp[i][j]=matrix[i][j]+min(dp[i-1][j+1],min(dp[i-1][j-1],dp[i-1][j]));
                }
            }
        }
        int minval=INT_MAX;
        for(int j=0;j<n;j++){
            if(dp[n-1][j]<minval){
                minval=dp[n-1][j];
            }
        }
        return minval;
    }
};