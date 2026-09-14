class Solution {
  public:
    int maximumPoints(vector<vector<int>>& mat) {
        vector<vector<int>>dp(mat.size(),vector<int>(3));
        dp[0][0]=mat[0][0];
        dp[0][1]=mat[0][1];
        dp[0][2]=mat[0][2];
        for(int i=1;i<mat.size();i++){
            for(int j=0;j<3;j++){
                if(j==0){
                    dp[i][j]=mat[i][j]+max(dp[i-1][j+1],dp[i-1][j+2]);
                }
                if(j==1){
                    dp[i][j]=mat[i][j]+max(dp[i-1][j-1],dp[i-1][j+1]);
                }
                if(j==2){
                    dp[i][j]=mat[i][j]+max(dp[i-1][j-1],dp[i-1][j-2]);
                }
            }
        }
        return max(dp[mat.size()-1][0],max(dp[mat.size()-1][1],dp[mat.size()-1][2]));
    }
};