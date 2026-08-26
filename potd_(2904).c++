class Solution {
public:
    string lexio(string ans,string curr){
        if(ans=="") return curr;
        for(int i=0;i<ans.length();i++){
            if(ans[i]<curr[i]) return ans;
        }
        return curr;
    }
    string shortestBeautifulSubstring(string s, int k) {
        int minlen=INT_MAX;
        int i=0;
        int count=0;
        string ans="";
        for(int j=0;j<s.length();j++){
            if(s[j]=='1'){
                count++;
            }
            while(count>=k){
                if(s[i]=='1') count--;
                if(minlen>=j-i+1){
                    if(minlen==j-i+1){
                        string curr=s.substr(i,j-i+1);
                        if(ans>curr)  ans=curr;
                    }
                    else{
                        ans=s.substr(i,j-i+1);
                        minlen=j-i+1;
                    }
                }
                i++;
            }
    }
    return ans;
    }
};
