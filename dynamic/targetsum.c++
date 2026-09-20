class Solution {
public:
    int helper(int i,int target,vector<vector<int>>&dp,vector<int>nums){
        if(i==0){
            if(target==0 && nums[i]==0) return 2;
            if(target==0 || nums[i]==target) return 1;
            return 0;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        int pick=0;
        if(nums[i]<=target){
            pick=helper(i-1,target-nums[i],dp,nums);
        }
        int notpick=helper(i-1,target,dp,nums);
        return dp[i][target]=pick+notpick;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(int i:nums) sum+=i;
        if(sum-target<0 || (sum-target)%2!=0) return false;
        vector<vector<int>>dp(nums.size(),vector<int>((sum-target)+1,-1));
        return helper(nums.size()-1,(sum-target)/2,dp,nums);
    }
};