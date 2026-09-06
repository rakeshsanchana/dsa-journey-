class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,pro=1;
        int val=n;
        while(n>0){
            int rem=n%10;
            n/=10;
            sum+=rem;
            pro*=rem;
        }
        int ans=sum+pro;
        if(val%ans==0) return true;
        return false;
    }
};
