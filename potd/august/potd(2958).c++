class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0;
        int maxlen=0;
        unordered_map<int,int>m;
        for(int j=0;j<nums.size();j++){
                m[nums[j]]++;
                while(m[nums[j]]>k){
                    m[nums[i]]--;
                    i++;
                }
                maxlen=max(maxlen,j-i+1);
        }
        return maxlen;
    }
};
