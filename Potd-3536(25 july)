class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
    int m=n;
        while(n>0){
            int rem=n%10;
            ans.push_back(rem);
            n/=10;
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1]*ans[ans.size()-2];
    }
};
