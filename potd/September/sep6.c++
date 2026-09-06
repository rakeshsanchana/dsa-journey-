class Solution {
public:
    long long subseq(vector<vector<long long>>&dp,int i,int j,string s,string t){
        if(j==t.length()){
            return 1;
        }
        if(i == s.length()){
            return 0;
        } 
        if(dp[i][j]!=-1){
            return dp[i][j];
        } 
        long long val=0;
        long long val1=0;
        if(s[i]==t[j]) val=subseq(dp,i+1,j+1,s,t);
        val1=subseq(dp,i+1,j,s,t);
        return dp[i][j]=val+val1;
    }
    int numDistinct(string s, string t) {
        if(t.length()>s.length()) return 0;
        vector<vector<long long>>dp(s.length(),vector<long long>(t.length(),-1));
        return subseq(dp,0,0,s,t);
    }
};