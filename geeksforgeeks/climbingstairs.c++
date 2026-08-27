class Solution {
  public:
    int countWays(int n) {
        if(n==1 || n==2) return n;
        int first=1;
        int second=1;
        int count=1;
        while(count<n){
           int val=first+second;
           first=second;
           second=val;
           count++;  
        }
          return second;
    }
};
