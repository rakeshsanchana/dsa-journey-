class Solution {
public:
    int minimumPushes(string word) {
        int count=1;
        int ans=0;
        for(int i=0;i<word.length();i++){
            if(count<=8) ans++;
            else if(count>8 && count<=16) ans+=2;
            else if(count>16 && count<=24) ans+=3;
            else ans+=4;
            count++;
        }
        return ans;
    }
};
