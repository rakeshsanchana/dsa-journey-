class Solution {
public:
    int helper(int i,int j,vector<vector<int>>&dp,string &s1,string &s2){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]){
            return dp[i][j]=int (s1[i])+helper(i-1,j-1,dp,s1,s2);
        }
        return dp[i][j]=max(helper(i-1,j,dp,s1,s2),helper(i,j-1,dp,s1,s2));
    }
    int minimumDeleteSum(string s1, string s2) {
        vector<vector<int>>dp(s1.length(),vector<int>(s2.length(),-1));
        int val=helper(s1.length()-1,s2.length()-1,dp,s1,s2);
        int sum=0;
        for(int i=0;i<s1.length();i++){
            sum+=int(s1[i]);
        }
        for(int i=0;i<s2.length();i++){
            sum+=int(s2[i]);
        }
        int ans=sum-(2*val);
        return ans;
    }
};