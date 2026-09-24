class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int minval=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                int rem=nums[i]%10;
                sum+=rem;
                nums[i]/=10;
            }
            if(sum==i){
                minval=min(minval,sum);
            }
        }
        if(minval==INT_MAX) return -1;
        return minval;
    }
};