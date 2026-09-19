class Solution {
  public:
  int helper(int i,int target,vector<vector<int>>&dp,vector<int>& arr){
      if(i==0){
          if(target==0 && arr[i]==0) return 2;
          if(arr[i]==target || target==0) return 1;
          return 0;
      }
      if(dp[i][target]!=-1) return dp[i][target];
       int notpick=helper(i-1,target,dp,arr);
      int pick=0;
      if(arr[i]<=target){
          pick=helper(i-1,target-arr[i],dp,arr);
      }
      return dp[i][target]=pick+notpick;
  }
    int perfectSum(vector<int>& arr, int target) {
        vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
        return helper(arr.size()-1,target,dp,arr);
    }
};