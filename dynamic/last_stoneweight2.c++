class Solution {
public:
    bool helper(int i,int target,vector<int>& stones,vector<vector<int>>&dp){
        if(target==0){
            return true;
        }
        if(i==0){
            if(stones[i]==target){
                return true;
            }
            return false;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        bool pick=false;
        if(stones[i]<=target) pick=helper(i-1,target-stones[i],stones,dp);
        bool notpick=helper(i-1,target,stones,dp);
        return dp[i][target]=pick||notpick;
    }
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0;
        for(int i:stones) sum+=i;
        vector<vector<int>>dp(stones.size(),vector<int>((sum/2)+1,-1));
        for(int s = sum/2; s >= 0; s--) {
            if(helper(stones.size()-1,s,stones,dp)) {
                int other = sum - s;
                return abs(other - s);
            }
        }
        return 0;
    }
};