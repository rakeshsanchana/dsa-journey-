class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int first=source[0];
        int second=source[1];
         int first1=target[0];
        int second1=target[1];
        
        if((first+second)%2==0 && (first1+second1)%2!=0 ||
          (first+second)%2!=0 && (first1+second1)%2==0 ) return -1;
        if(abs(first-first1)!=abs(second-second1)) return 2;
        return 1;
    }
};
