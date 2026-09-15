class Solution {
  public:
   bool helper(vector<int>& arr, int sum,int i,vector<vector<int>>&dp){
       if(sum==0) return true;
       if(i==0){
           if(arr[i]==sum){
               return true;
           }
         return false;
       }
       if(dp[i][sum]!=-1){
           return dp[i][sum];
       }
       bool take=false;
       if(arr[i]<=sum){
           take= helper(arr,sum-arr[i],i-1,dp);
       }
       bool nottake=helper(arr,sum,i-1,dp);
       return dp[i][sum]=nottake||take;
   }
    bool isSubsetSum(vector<int>& arr, int sum) {
        vector<vector<int>>dp(arr.size(),vector<int>(sum+1,-1));
        return helper(arr,sum,arr.size()-1,dp);
    }
};