class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxcount=0;
        int i=0;
        unordered_map<char,int>m;
        for(int j=0;j<s.length();j++){
            m[s[j]]++;
            while(m[s[j]]>2){
                m[s[i]]--;
                i++;
            }
            maxcount=max(maxcount,j-i+1);
        }
        return maxcount;
    }
};
