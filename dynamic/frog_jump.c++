class Solution {
  public:
    int minCost(vector<int>& height) {
        if(height.size()==1) return 0;
        vector<int>dp(height.size());
        dp[0]=0;
        dp[1]=abs(height[0]-height[1]);
        for(int i=2;i<height.size();i++){
            dp[i]=min(abs(height[i]-height[i-1])+dp[i-1],abs(height[i]-height[i-2])+dp[i-2]);
        }
        return dp[height.size()-1];
    }
};