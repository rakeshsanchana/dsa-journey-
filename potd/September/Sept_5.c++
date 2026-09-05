class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
int n=nums.size();       
vector<int>prefix(nums.size());
vector<int>suffix(nums.size());     
prefix[0]=nums[0];
suffix[n-1]=nums[n-1];
    for(int i=1;i<n;i++){
        if(prefix[i-1]<nums[i]){
            prefix[i]=nums[i];
        }
        else{
            prefix[i]=prefix[i-1];
        }
    }
        for(int i=n-2;i>=0;i--){
        if(suffix[i+1]>nums[i]){
            suffix[i]=nums[i];
        }
        else{
            suffix[i]=suffix[i+1];
        }
        }
        for(int i=0;i<n;i++){
            if(prefix[i]-suffix[i]<=k){
                return i;
            }
        }
        return -1;
    }
};
