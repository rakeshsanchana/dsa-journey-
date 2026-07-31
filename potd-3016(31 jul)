class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(char ch: word){
            freq[ch-'a']++;
        }
        vector<int>ans;
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                ans.push_back(freq[i]);
            }
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        int res=0;
        for(int i=0;i<ans.size();i++){
            if(i<8){
                res=res+(ans[i]*1);
            }
            else if(i>=8 && i<16) res=res+(ans[i]*2);
            else if(i>=16 && i<24) res=res+(ans[i]*3);
            else res=res+(ans[i]*4);
        }
        return res;
    }
};
