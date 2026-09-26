class Solution {
public:
    int helper(int i,int j,vector<vector<int>>&dp,string &s){
        if(i>j) return 0;
        if(i==j){
            if(s[i]==s[j]) return 1;
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j]) return dp[i][j]=2+helper(i+1,j-1,dp,s);
        return dp[i][j]=max(helper(i,j-1,dp,s),helper(i+1,j,dp,s));
    }
    int longestPalindromeSubseq(string s) {
        if(s.length()==1) return 1;
        vector<vector<int>>dp(s.length(),vector<int>(s.length(),-1));
        int val=helper(0,s.length()-1,dp,s);
        return val;
    }
};