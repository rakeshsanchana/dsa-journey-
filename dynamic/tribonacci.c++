class Solution {
public:
    int tribonacci(int n) {
        int first=0,second=1,third=1;
        if(n==0 || n==1) return n;
        if(n==2) return 1;
        int count=2;
        while(count<n){
            int val=first+second+third;
            first=second;
            second=third;
            third=val;
            count++;
        }
        return third;
    }
};
