class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for(int i : nums) {
            total += i;
        }
        if(x == total){
            return nums.size();
        }
        int target = total - x;
        unordered_map<int, int> m;
        m[0] = -1;
        int sum = 0;
        int maxLen = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int required = sum - target;
            if(m.find(required) != m.end()) {
                int len = i - m[required];
                maxLen = max(maxLen, len);
            }
            if(m.find(sum) == m.end()) {
                m[sum] = i;
            }
        }
        if(maxLen == 0) {
            return -1;
        }
        return nums.size() - maxLen;
    }
};