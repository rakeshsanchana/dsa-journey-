class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        long long val=0,sum=0;
        for(int i=0;i<nums.size();i++){
            val=val^nums[i];
            sum+=nums[i];
        }
        if(sum==0) return 0;
        if(val==0) return nums.size()-1;
        return nums.size();
        
    }
};
