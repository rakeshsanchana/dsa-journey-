class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int>s;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0) continue;
            int hund=digits[i]*100;
            for(int j=0;j<digits.size();j++){
                if(j==i){
                    continue;
                }
                int tens=digits[j]*10;
            for(int k=0;k<digits.size();k++){
                int sum=0;
                if(k==i || k==j){
                    continue;
                }
                sum=hund+tens+digits[k];
                if(sum%2==0) s.insert(sum);
            }
        }
        }
        return s.size();
    }
};