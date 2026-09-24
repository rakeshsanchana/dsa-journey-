class Solution {
  public:
  int helper(int i,int target,vector<vector<int>>&dp,vector<int>&prices){
      if(target==0){
          return 0;
      }
      if(i==0){
          return target*prices[i];
      }
      if(dp[i][target]!=-1){
          return dp[i][target];
      }
      int notpick=helper(i-1,target,dp,prices);
      int pick=0;
      if((i+1)<=target){
          pick=prices[i]+helper(i,target-(i+1),dp,prices);
      }
      return dp[i][target]=max(pick,notpick);
      
  }
    int cutRod(vector<int> &prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(prices.size()+1,-1));
       return  helper(prices.size()-1,prices.size(),dp,prices);
        
    }
};