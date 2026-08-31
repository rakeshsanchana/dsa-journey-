class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int lar=INT_MIN,lind=0;
        int sma=INT_MAX,sind=0;
        for(int i=0;i<nums.size();i++){
            if(lar<nums[i]){
                lar=nums[i];
                lind=i;
            } 
            if(sma>nums[i]) {
                sma=nums[i];
                sind=i;
            }
        }
        int p1 = max(lind,sind)+1;
        int p2 = n - min(lind,sind);
        int val1=min((lind),(n-lind))+1;
        int val2=min((sind),(n-sind));
        ans=val1+val2;
        ans=min(p1,min(p2,ans));
        return ans;
    }
};
