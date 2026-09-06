class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        string ans="";
        string extra="";
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
              int q=freq[i]/2;
            for(int j=0;j<q;j++){
            string curr(1, 'a' + i);
            ans+=curr;
            }
            }
            if(freq[i]%2==1){
                string curr(1, 'a' + i);
                extra=curr;
            }
            freq[i]/=2;
        }
        string temp=ans;
        ans+=extra;
        reverse(temp.begin(),temp.end());
        return ans+temp;
    }
};
