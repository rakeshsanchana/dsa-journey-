class Solution {
public:
    int gcd(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        if(a==1) return 1;
        if(b==1) return 1;
        return gcd(b%a,a);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[nums.size()-1]);
    }
};
