class Solution {
public:
    int helper(int i,int j,vector<vector<int>>&dp,string &text1,string &text2){
        if(i<0 || j<0){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(text1[i]==text2[j]) return dp[i][j]=1+helper(i-1,j-1,dp,text1,text2);
        return dp[i][j]=max(helper(i-1,j,dp,text1,text2),helper(i,j-1,dp,text1,text2));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.length(),vector<int>(text2.length(),-1));
        return helper(text1.length()-1,text2.length()-1,dp,text1,text2);
    }
};