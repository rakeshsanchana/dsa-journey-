class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<101;i++){
            int val=i;
            int pro=1;
            while(val>0){
                int rem=val%10;
                val/=10;
                pro*=rem;
            }
            if(pro%t==0){
                return i;
        }
        }
        return 0;
    }
};
