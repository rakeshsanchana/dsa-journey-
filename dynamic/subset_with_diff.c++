class Solution {
  public:
  int helper(int i,int target,vector<vector<int>>&dp,vector<int>&arr){
      if(i==0){
          if(target==0 && arr[i]==0) return 2;
          if(target==0 || arr[i]==target) return 1;
          return 0;
      }
      if(dp[i][target]!=-1) return dp[i][target];
      int pick=0;
      if(arr[i]<=target) {
          pick=helper(i-1,target-arr[i],dp,arr);
      }
      int notpick=helper(i-1,target,dp,arr);
      return dp[i][target]=pick+notpick;
  }
    int countPartitions(vector<int>& arr, int diff) {
        int sum=0;
        for(int i:arr) sum+=i;
        if(sum-diff<0 || (sum-diff)%2!=0) return false;
        vector<vector<int>>dp(arr.size(),vector<int>((sum-diff)+1,-1));
        return helper(arr.size()-1,(sum-diff)/2,dp,arr);
    }
};