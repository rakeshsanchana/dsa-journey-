class Solution {
public:
    int helper(int i,int target,vector<vector<int>>&dp,vector<int>&coins){
        if(i==0){
            if(target%coins[i]==0) return 1;
            else return 0;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        int notpick=helper(i-1,target,dp,coins);
        int pick=0;
        if(coins[i]<=target){
            pick=helper(i,target-coins[i],dp,coins);
        }
        return dp[i][target]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return helper(coins.size()-1,amount,dp,coins);
    }
};