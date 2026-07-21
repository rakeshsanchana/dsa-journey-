class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int i=0,j=0;
        int ans=0,prev=INT_MIN,ones=0;
        int n=s.length();
        while(i<n){
            j=i;
            int length=0;
            while(j<n && s[i]==s[j]){
                j++;
            }
            length=j-i;
            if(s[i]=='1') ones+=length;
            else{
                ans=max(ans,length+prev);
                prev=length;
            }
            i=j;
        }
        return ans+ones;
    }
};
