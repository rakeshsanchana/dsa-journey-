class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;
        int count=1;
        int first=0;
        int second=1;
        while(count<n){
            int val=first+second;
            first=second;
            second=val;
            count++;
        }
        return second;
    }
};
