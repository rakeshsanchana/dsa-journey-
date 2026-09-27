class Solution {
public:
    int helper(int i,int j,vector<vector<int>>&dp,string &word1,string &word2){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i]==word2[j]) return dp[i][j]=1+helper(i-1,j-1,dp,word1,word2);
        return dp[i][j]=max(helper(i-1,j,dp,word1,word2),helper(i,j-1,dp,word1,word2));
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.length(),vector<int>(word2.length(),-1));
        int val= helper(word1.length()-1,word2.length()-1,dp,word1,word2);
        int ans=word1.length()+word2.length();
        cout<<val<<" "<<ans;
        return ans-(2*val);
    }
};
