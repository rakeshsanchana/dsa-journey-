class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> mul;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % k == 0) {
                mul.push_back(nums[i]);
            }
        }
        int val = k;
        for (int i = 0; i < mul.size(); i++) {
            if (mul[i] == val) {
                val += k;
            }
        }
        return val;
    }
};
