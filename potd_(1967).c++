class Solution {
public:
    bool sumGame(string num) {
      int leftq=0,rightq=0,rightsum=0,leftsum=0;
        for(int i=0;i<num.size()/2;i++){
            if(num[i]=='?') leftq++;
            else leftsum+=num[i]-'0';
        }
        for(int i=num.size()/2;i<num.size();i++){
            if(num[i]=='?') rightq++;
            else rightsum+=num[i]-'0';
        }
        int diff=leftsum-rightsum;
        int qdiff=rightq-leftq;
        if((leftq+rightq)%2==1){
            return true;
        }
        return (2*diff)!=(9*qdiff);
    }
};
