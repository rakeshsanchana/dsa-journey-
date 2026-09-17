class Solution {
public:
    bool helper(int i, int target, vector<vector<int>>& dp, vector<int>& nums) {
        if(target == 0) {
            return true;
        }
        if(i == 0) {
            return nums[i] == target;
        }
        if(dp[i][target] != -1) {
            return dp[i][target];
        }
        bool take = false;
        if(nums[i] <= target) {
            take = helper(i - 1, target - nums[i], dp, nums);
        }
        bool nottake = helper(i - 1, target, dp, nums);
        return dp[i][target] = take || nottake;
    }
    int minDifference(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int target = sum / 2;
        vector<vector<int>> dp(
            nums.size(),
            vector<int>(target + 1, -1)
        );
        helper(nums.size() - 1, target, dp, nums);
        for(int s = target; s >= 0; s--) {
            if(helper(nums.size() - 1, s, dp, nums)) {
                int other = sum - s;
                return abs(other - s);
            }
        }
        return 0;
    }
};