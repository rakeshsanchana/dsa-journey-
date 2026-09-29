class Solution {
public:
    int helper(int i,int j,vector<vector<int>>&dp,string &s){
        if(i>j) return 0;
        if(i==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j]) return dp[i][j]=helper(i+1,j-1,dp,s);
        return dp[i][j]=1+min(helper(i+1,j,dp,s),helper(i,j-1,dp,s));
    }
    int minInsertions(string s) {
        vector<vector<int>>dp(s.length(),vector<int>(s.length(),-1));
        return helper(0,s.length()-1,dp,s);
    }
};