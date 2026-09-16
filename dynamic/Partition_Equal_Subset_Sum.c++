class Solution {
public:
    bool helper(int i,vector<int>&nums,vector<vector<int>>&dp,int target){
        if(target==0) return true;
        if(i==0){
            if(target==nums[i]) return true;
            return false;
        }
        if(dp[i][target]!=-1){
            return dp[i][target];
        }
        bool take=false;
        if(nums[i]<=target){
            take=helper(i-1,nums,dp,target-nums[i]);
        }
        bool nottake=helper(i-1,nums,dp,target);
        return dp[i][target]=take||nottake;
    }
    bool canPartition(vector<int>& nums) {
         int sum=0;
         for(int i=0;i<nums.size();i++){
            sum+=nums[i];
         }
         if(sum%2!=0) return false;;
         int target=sum/2;
        vector<vector<int>>dp(nums.size(),vector<int>(target+1,-1));
        return helper(nums.size()-1,nums,dp,target);
    }
};