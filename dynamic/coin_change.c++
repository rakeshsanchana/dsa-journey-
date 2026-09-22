class Solution {
public:
    int helper(int i,int target,vector<vector<int>>&dp,vector<int>&coins){
        if(i==0){
            if(target%coins[i]==0) return target/coins[i];
            else return 1e9;
        }
        if(dp[i][target]!=-1){
            return dp[i][target];
        }
        int notpick=0+helper(i-1,target,dp,coins);
        int pick=INT_MAX;
        if(coins[i]<=target){
            pick=1+helper(i,target-coins[i],dp,coins);
        }
        return dp[i][target]=min(pick,notpick);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans=helper(coins.size()-1,amount,dp,coins);
        if(ans>=1e9) return -1;
        return ans;
    }
};